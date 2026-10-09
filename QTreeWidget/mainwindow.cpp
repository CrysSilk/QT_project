#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
#include <QFileDialog>
#include <QDebug>
#include <QDockWidget>
#include <QHeaderView>
#include <QMessageBox>
#include <QResizeEvent>
#include <QSignalBlocker>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupUiState();

    setupTreeDock();

    initTree();

    setupActions();
}

void MainWindow::setupUiState()
{
    /*
     * setToolButtonStyle(...) 用于设置工具栏上所有工具按钮的文本和图标的显示方式
     * Qt::ToolButtonTextUnderIcon      文本在图标下方
     * Qt::ToolButtonIconOnly           只显示图标 不显示文字
     * Qt::ToolButtonTextOnly           只显示文字 不显示图标
     * Qt::ToolButtonTextBesideIcon     文本在图标右侧
     * Qt::ToolButtonFollowStyle        遵循系统的默认样式
     */
    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    // 设置Qt中树形控件的表头列标题
    ui->treeWidget->setHeaderLabels({
        QStringLiteral("节点"),
        QStringLiteral("节点类型")
    });

    // 设置Qt中树形控件各列的大小调整策略
    ui->treeWidget->header()->setSectionResizeMode(NameColumn, QHeaderView::Stretch);
    ui->treeWidget->header()->setSectionResizeMode(TypeColumn, QHeaderView::ResizeToContents);
    // 监听树形控件中当前选中项改变的事件
    connect(ui->treeWidget, &QTreeWidget::currentItemChanged, this, &MainWindow::on_CurrentItem_Changed);
    // 设置单选模式
    ui->treeWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    // 统一行高
    ui->treeWidget->setUniformRowHeights(true);
    // 禁用自动排序
    ui->treeWidget->setSortingEnabled(false);
    // 监听树形控件中节点内容改变的事件
    connect(ui->treeWidget, &QTreeWidget::itemChanged, this, &MainWindow::on_Item_Changed);
    // 设置滚动区域的子部件自适应大小
    ui->scrollArea->setWidgetResizable(true);
    // 设置标签内容的对齐方式 Qt::AlignCenter 居中对齐
    ui->labDisplay->setAlignment(Qt::AlignCenter);
    clearImagePreview();
}

void MainWindow::setupTreeDock()
{
    m_treeDock = new QDockWidget(QStringLiteral("相簿目录"), this);
    // 设置面板的内部唯一标识名
    m_treeDock->setObjectName(QStringLiteral("treeDock"));
    m_treeDock->setWidget(ui->treeWidget);
    // 限制最小宽度
    m_treeDock->setMinimumWidth(220);
    // 添加到主窗口左侧区域(Qt::LeftDockWidgetArea)
    addDockWidget(Qt::LeftDockWidgetArea, m_treeDock);
}

void MainWindow::setupActions()
{
    const auto addAction = [this](const QString &text, const QString &iconPath, const char *slot) {
        QAction *action = ui->toolBar->addAction(QIcon(iconPath), text);
        connect(action, SIGNAL(triggered()), this, slot);
        return action;
    };

    addAction(QStringLiteral("添加文件夹"), QStringLiteral(":/icons/images/Image016.jpg"), SLOT(addFolder()));
    addAction(QStringLiteral("添加图片"), QStringLiteral(":/icons/images/Image007.jpg"), SLOT(addImageFile()));
    m_deleteAction = addAction(QStringLiteral("删除"), QStringLiteral(":/icons/images/Image005.jpg"), SLOT(deleteCurrentItem()));
    addAction(QStringLiteral("遍历节点"), QStringLiteral(":/icons/images/Image008.jpg"), SLOT(scanTree()));
    ui->toolBar->addSeparator();
    addAction(QStringLiteral("放大"), QStringLiteral(":/icons/images/Image012.jpg"), SLOT(zoomIn()));
    addAction(QStringLiteral("缩小"), QStringLiteral(":/icons/images/Image011.jpg"), SLOT(zoomOut()));
    addAction(QStringLiteral("实际大小"), QStringLiteral(":/icons/images/Image002.jpg"), SLOT(showActualSize()));
    ui->toolBar->addSeparator();
    addAction(QStringLiteral("适应高度"), QStringLiteral(":/icons/images/Image009.jpg"), SLOT(fitToHeight()));
    addAction(QStringLiteral("适应宽度"), QStringLiteral(":/icons/images/Image010.jpg"), SLOT(fitToWidth()));
    ui->toolBar->addSeparator();
    m_dockFloatingAction = addAction(QStringLiteral("浮动目录"), QStringLiteral(":/icons/images/Image015.jpg"), SLOT(toggleTreeDockFloating()));
    m_dockVisibleAction = addAction(QStringLiteral("隐藏目录"), QStringLiteral(":/icons/images/Image003.jpg"), SLOT(toggleTreeDockVisible()));
    ui->toolBar->addSeparator();
    addAction(QStringLiteral("退出"), QStringLiteral(":/icons/images/Image004.jpg"), SLOT(close()));
    updateActionState();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initTree()
{
    // 清空原有节点 避免重复初始化
    ui->treeWidget->clear();

    // 使用RootItem创建一个根节点
    auto *root = new QTreeWidgetItem(RootItem);

    // 第 0 列显示节点名称
    root->setText(NameColumn, QStringLiteral("相簿"));

    // 第 1 列显示节点类型
    root->setText(TypeColumn, QStringLiteral("根节点"));

    // 根节点没有对应的文件或文件夹路径 此处保存空字符串
    root->setData(NameColumn, PathRole, QString());

    /*
     * 设置根节点的功能标志：
     *
     * ItemIsSelectable    ：允许选中
     * ItemIsEnabled       ：节点可用
     * ItemIsUserCheckable ：允许显示复选框
     * ItemIsAutoTristate  ：父节点根据子节点状态自动显示三态复选框
     */
    root->setFlags(
        Qt::ItemIsSelectable |
        Qt::ItemIsEnabled |
        Qt::ItemIsUserCheckable |
        Qt::ItemIsAutoTristate
    );

    // 设置根节点初始为未选中状态
    root->setCheckState(NameColumn, Qt::Unchecked);

    // 添加到 QTreeWidget 的顶层
    ui->treeWidget->addTopLevelItem(root);

    // 设置当前选中节点为根节点
    ui->treeWidget->setCurrentItem(root);

    // 展开根节点 方便用户继续添加内容
    root->setExpanded(true);
}

QTreeWidgetItem *MainWindow::currentItem() const
{
    return ui->treeWidget->currentItem();
}

QTreeWidgetItem *MainWindow::rootItem() const
{
    // 判断是否有顶级节点
    if (ui->treeWidget->topLevelItemCount() == 0)
    {
        return nullptr;
    }

    return ui->treeWidget->topLevelItem(0);
}

void MainWindow::addFolder()
{
    // 打开文件夹选择对话框
    const QString dirPath = QFileDialog::getExistingDirectory(
        this,
        QStringLiteral("选择文件夹"));

    // 用户取消选择时直接返回
    if (dirPath.isEmpty())
    {
        return;
    }

    // 默认将文件夹添加到当前选中节点下面
    QTreeWidgetItem *parentItem = getInsertParent(currentItem());

    if (parentItem == nullptr)
    {
        return;
    }

    // 使用FolderItem创建文件夹节点
    auto *folderItem = new QTreeWidgetItem(FolderItem);

    // 显示文件夹名称 不显示完整路径
    folderItem->setText(
        NameColumn,
        QFileInfo(dirPath).fileName()
    );

    // 显示节点类型
    folderItem->setText(TypeColumn, QStringLiteral("文件夹"));

    // 保存文件夹的完整路径
    // 界面上显示的是文件夹名称 但程序实际操作时需要使用完整路径
    folderItem->setData(NameColumn, PathRole, dirPath);

    // 设置文件夹节点属性
    folderItem->setFlags(
        Qt::ItemIsSelectable |
        Qt::ItemIsEnabled |
        Qt::ItemIsUserCheckable |
        Qt::ItemIsAutoTristate
    );

    // 设置复选框初始状态
    folderItem->setCheckState(NameColumn, Qt::Unchecked);

    // 将文件夹节点添加到父节点下面
    parentItem->addChild(folderItem);

    // 自动展开父节点 显示新添加的文件夹
    parentItem->setExpanded(true);

    // 将新添加的文件夹设置为当前节点
    ui->treeWidget->setCurrentItem(folderItem);
}

void MainWindow::addImageFile()
{
    // 一次可以选中多个图片文件
    const QStringList filePaths = QFileDialog::getOpenFileNames(
        this,
        QStringLiteral("选择图片文件"),
        QString(),
        QStringLiteral(
            "图片文件 (*.png *.jpg *.jpeg *.bmp *.gif *.ico)"
        )
    );

    // 用户取消选择时直接返回
    if (filePaths.isEmpty())
    {
        return;
    }

    // 默认添加到当前选中节点下面
    QTreeWidgetItem *parentItem = getInsertParent(currentItem());

    if (parentItem == nullptr)
    {
        return;
    }

    QTreeWidgetItem *lastImageItem = nullptr;

    // 遍历用户选择的所有图片
    for (const QString &filePath : filePaths)
    {
        auto *imageItem = new QTreeWidgetItem(ImageItem);

        // 界面显示图片文件名
        imageItem->setText(
            NameColumn,
            QFileInfo(filePath).fileName()
        );

        // 显示节点类型
        imageItem->setText(TypeColumn, QStringLiteral("图片"));

        // 保存图片的完整路径
        imageItem->setData(NameColumn, PathRole, filePath);

        imageItem->setFlags(
            Qt::ItemIsSelectable |
            Qt::ItemIsEnabled |
            Qt::ItemIsUserCheckable
        );

        // 设置图片节点初始复选状态
        imageItem->setCheckState(NameColumn, Qt::Unchecked);

        // 将图片节点添加到父节点下面
        parentItem->addChild(imageItem);
        lastImageItem = imageItem;
    }

    // 展开父节点，显示新添加的图片
    parentItem->setExpanded(true);

    if (lastImageItem != nullptr)
    {
        ui->treeWidget->setCurrentItem(lastImageItem);
    }
}

bool MainWindow::isFolderItem(QTreeWidgetItem *item) const
{
    if (item == nullptr)
    {
        return false;
    }

    // 根节点和文件夹节点都可以作为图片的父节点
    return item->type() == RootItem || item->type() == FolderItem;
}

void MainWindow::deleteCurrentItem()
{
    // 获取当前选中的节点
    QTreeWidgetItem *item = currentItem();

    // 没选中节点时不执行删除 || 根节点是树的固定节点 不允许用户删除
    if (item == nullptr || item->type() == RootItem)
    {
        return;
    }

    QTreeWidgetItem *parent = item->parent();

    // 删除 QTreeWidgetItem 后
    // Qt 会自动删除子节点
    delete item;

    // 如果父节点仍然存在 则重新选中父节点
    if (parent != nullptr)
    {
        ui->treeWidget->setCurrentItem(parent);
    }

    updateActionState();
}

void MainWindow::scanItem(QTreeWidgetItem *item, int level)
{
    if (item == nullptr)
    {
        return;
    }

    // 生成一个包含指定数量空格的缩进字符串(仅供控制台输出的视觉效果)
    const QString indent(level * 2, QLatin1Char(' '));

    const QString name = item->text(NameColumn);
    const QString type = item->text(TypeColumn);
    const QString path = item->data(NameColumn, PathRole).toString();

    qDebug().noquote()
        << indent
        << name
        << "| 类型:" << type
        << "| 路径:" << path;

    for (int i = 0; i < item->childCount(); ++i)
    {
        scanItem(item->child(i), level + 1);
    }
}

void MainWindow::scanTree()
{
    // 获取顶级节点的数量
    // 顶级节点:即根节点 没有父节点的顶层项目
    const int topLevelCount = ui->treeWidget->topLevelItemCount();

    for (int i = 0; i < topLevelCount; ++i)
    {
        // 获取 QTreeWidget 中指定索引(下标) 的顶级节点(即根节点)的指针
        QTreeWidgetItem *item = ui->treeWidget->topLevelItem(i);

        // 遍历顶级节点的子节点
        scanItem(item);
    }
}

void MainWindow::on_CurrentItem_Changed(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous);

    if (current == nullptr)
    {
        clearImagePreview();
        updateActionState();
        return;
    }

    const QString name = current->text(NameColumn);
    const QString path = current->data(NameColumn, PathRole).toString();

    qDebug() << "当前节点:" << name;
    qDebug() << "节点路径:" << path;

    switch (current->type())
    {
    case RootItem:
        qDebug() << "当前选中的是根节点";
        break;

    case FolderItem:
        qDebug() << "当前选中的是文件夹";
        break;

    case ImageItem:
    {
        qDebug() << "当前选中的是图片";
        showImage(path);
        break;
    }

    default:
        qDebug() << "未知节点类型";
        break;
    }

    if (current->type() != ImageItem)
    {
        clearImagePreview(QStringLiteral("请选择一张图片进行预览"));
    }
    updateActionState();
}

QTreeWidgetItem *MainWindow::getInsertParent(QTreeWidgetItem *current) const
{
    QTreeWidgetItem *root = rootItem();

    if (root == nullptr)
    {
        return nullptr;
    }

    // 没有选中节点时 添加到根节点
    if (current == nullptr)
    {
        return root;
    }

    // 图片节点不能作为父节点 改用它的父节点
    if (current->type() == ImageItem)
    {
        return current->parent() != nullptr ? current->parent() : root;
    }

    // 根节点和文件夹节点都可以作为父节点
    if (isFolderItem(current))
    {
        return current;
    }

    return root;
}

void MainWindow::setChildrenCheckState(QTreeWidgetItem *item, Qt::CheckState state)
{
    if (item == nullptr)
    {
        return;
    }

    // 遍历当前节点的所有子节点
    for (int i = 0; i < item->childCount(); ++i) {
        QTreeWidgetItem *child = item->child(i);
        child->setCheckState(NameColumn, state);
        setChildrenCheckState(child, state);
    }
}

void MainWindow::on_Item_Changed(QTreeWidgetItem *item, int column)
{
    if (item == nullptr || column != NameColumn)
    {
        return;
    }

    // 只有根节点的状态变化时 才统一设置所有子节点
    if (item->type() != RootItem)
    {
        return;
    }

    const Qt::CheckState state = item->checkState(NameColumn);

    // PartiallyChecked 表示子节点处于混合状态
    if (state == Qt::PartiallyChecked)
    {
        return;
    }

    // 暂时阻塞 treeWidget 的itemChanged 信号
    // 防止递归触发当前槽函数
    const QSignalBlocker blocker(ui->treeWidget);
    // 当前根节点为 Checked or Unchecked 时
    // 将这个状态递归应用到所有子节点
    setChildrenCheckState(item, state);
}

void MainWindow::showImage(const QString &filePath)
{
    const QPixmap pixmap(filePath);
    if (pixmap.isNull())
    {
        m_originalPixmap = QPixmap();
        clearImagePreview(QStringLiteral("图片加载失败：%1").arg(filePath));
        return;
    }

    m_originalPixmap = pixmap;
    m_zoomFactor = 1.0;
    m_displayMode = ImageDisplayMode::ActualSize;
    updateImagePreview();
}

void MainWindow::updateImagePreview()
{
    if (m_originalPixmap.isNull())
    {
        return;
    }

    // 获取并安全限制滚动区域(QScrollArea)视口的可用大小
    const QSize available = ui->scrollArea->viewport()->size().boundedTo(QSize(8192, 8192));
    QSize targetSize = m_originalPixmap.size();
    if (m_displayMode == ImageDisplayMode::FitWidth && available.width() > 0)
    {
        targetSize = m_originalPixmap.size().scaled(available.width(), 8192, Qt::KeepAspectRatio);
    }
    else if (m_displayMode == ImageDisplayMode::FitHeight && available.height() > 0)
    {
        targetSize = m_originalPixmap.size().scaled(8192, available.height(), Qt::KeepAspectRatio);
    }
    else if (m_displayMode == ImageDisplayMode::ActualSize)
    {
        targetSize = (m_originalPixmap.size() * m_zoomFactor).boundedTo(QSize(8192, 8192));
    }

    ui->labDisplay->setText(QString());
    ui->labDisplay->setPixmap(m_originalPixmap.scaled(targetSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->labDisplay->setMinimumSize(targetSize);
}

void MainWindow::clearImagePreview(const QString &message)
{
    m_originalPixmap = QPixmap();
    // 清空QLabel当前显示的图像内容 移除画面上的残影
    ui->labDisplay->setPixmap(QPixmap());
    ui->labDisplay->setMinimumSize(QSize(1, 1));
    ui->labDisplay->setText(message.isEmpty() ? QStringLiteral("请在左侧添加或选择图片") : message);
}

void MainWindow::updateActionState()
{
    if (m_deleteAction != nullptr)
    {
        QTreeWidgetItem *item = currentItem();
        m_deleteAction->setEnabled(item != nullptr && item->type() != RootItem);
    }
    if (m_dockFloatingAction != nullptr)
    {
        m_dockFloatingAction->setText(m_treeDock != nullptr && m_treeDock->isFloating()
            ? QStringLiteral("固定目录") : QStringLiteral("浮动目录"));
    }
    if (m_dockVisibleAction != nullptr)
    {
        m_dockVisibleAction->setText(m_treeDock != nullptr && !m_treeDock->isHidden()
            ? QStringLiteral("隐藏目录") : QStringLiteral("显示目录"));
    }
}

void MainWindow::zoomIn()
{
    if (m_originalPixmap.isNull()) return;
    // 设置显示模式为“实际大小”
    m_displayMode = ImageDisplayMode::ActualSize;
    // 计算并限制放大倍数
    m_zoomFactor = qMin(m_zoomFactor * 1.25, 8.0);
    // 刷新图像预览
    updateImagePreview();
}

void MainWindow::zoomOut()
{
    if (m_originalPixmap.isNull()) return;
    m_displayMode = ImageDisplayMode::ActualSize;
    m_zoomFactor = qMax(m_zoomFactor / 1.25, 0.1);
    updateImagePreview();
}

void MainWindow::showActualSize()
{
    if (m_originalPixmap.isNull()) return;
    m_displayMode = ImageDisplayMode::ActualSize;
    m_zoomFactor = 1.0;
    updateImagePreview();
}

void MainWindow::fitToWidth()
{
    if (m_originalPixmap.isNull()) return;
    // 设置显示模式为“适应宽度”
    m_displayMode = ImageDisplayMode::FitWidth;
    updateImagePreview();
}

void MainWindow::fitToHeight()
{
    if (m_originalPixmap.isNull()) return;
    // 设置显示模式为“适应高度”
    m_displayMode = ImageDisplayMode::FitHeight;
    updateImagePreview();
}

void MainWindow::toggleTreeDockFloating()
{
    // m_treeDock->isFloating() 检查当前的m_treeDock是否处于浮悬状态
    // m_treeDock->setFloating(...) 设置面板的浮悬状态
    m_treeDock->setFloating(!m_treeDock->isFloating());
    updateActionState();
}

void MainWindow::toggleTreeDockVisible()
{
    // m_treeDock->isHidden() 检查当前的m_treeDock是否处于隐藏状态 隐藏true    显示false
    // m_treeDock->setVisible(...) 显示true   隐藏false
    m_treeDock->setVisible(m_treeDock->isHidden());
    updateActionState();
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    // 显示调用 确保Qt正常完成窗口本身的尺寸处理
    QMainWindow::resizeEvent(event);
    if (m_displayMode != ImageDisplayMode::ActualSize)
    {
        updateImagePreview();
    }
}
