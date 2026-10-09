#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("记事本");

    // 初始化菜单指针
    editMenu = new QMenu(this);
    QAction *copysignal = editMenu->addAction("复制(C)", this, &MainWindow::copyActionSlot);
    copysignal->setEnabled(false);
    // 监听文本框状态
    connect(ui->textEdit, &QTextEdit::copyAvailable, copysignal, &QAction::setEnabled);

    pastesignal = editMenu->addAction("粘贴(V)", this, &MainWindow::pasteActionSlot);
    QClipboard *clipboard = QApplication::clipboard();
    pastesignal->setEnabled(!clipboard->text().isEmpty());
    // 监听系统剪贴板变化
    connect(clipboard, &QClipboard::dataChanged, this, &MainWindow::updatePasteActionState);

    editMenu->addAction("撤回(A)", this, &MainWindow::wdActionSlot);

    // newAction Signal
    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);

    // openAction Signal
    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openActionSlot);

    // saveAction Signal
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveActionSlot);

    // quitAction Signal
    connect(ui->quitAction, &QAction::triggered, this, &MainWindow::quitActionSlot);

    // 绑定顶部菜单/工具栏粘贴动作
    connect(ui->pasteAction, &QAction::triggered, this, &MainWindow::pasteActionSlot);

    // clearAction Signal
    connect(ui->clearAction, &QAction::triggered, this, &MainWindow::clearActionSlot);

    // allAction Signal
    connect(ui->allAction, &QAction::triggered, this, &MainWindow::allActionSlot);

    // delAction Signal
    connect(ui->delAction, &QAction::triggered, this, &MainWindow::delActionSlot);
    // 当有文字被选中时 copyAvailable(true) 会把对应的 Action 设置为 enable (true)
    connect(ui->textEdit, &QTextEdit::copyAvailable, ui->copyAction, &QAction::setEnabled);

    // copyAction Signal
    connect(ui->copyAction, &QAction::triggered, this, &MainWindow::copyActionSlot);
    connect(ui->textEdit, &QTextEdit::copyAvailable, ui->delAction, &QAction::setEnabled);

    // wdAction Signal
    connect(ui->wdAction, &QAction::triggered, this, &MainWindow::wdActionSlot);

    // magAction Signal + shrAction Signal
    connect(ui->magAction, &QAction::triggered, this, &MainWindow::magActionSlot);
    connect(ui->shrAction, &QAction::triggered, this, &MainWindow::shrActionSlot);

    // 初始状态下不可用
    ui->copyAction->setEnabled(false);
    ui->delAction->setEnabled(false);

    // 创建状态栏标签并添加到状态栏最左侧
    cursorPosLabel = new QLabel("行 1    列 1", this);
    statusBar()->addWidget(cursorPosLabel);

    // 监听 textEdit 的光标位置变化信号
    connect(ui->textEdit, &QTextEdit::cursorPositionChanged, this, &MainWindow::updateCursorPosition);

    // 将 barAction 设置为可勾选状态 并默认设为选中(显示状态栏)
    ui->barAction->setCheckable(true);
    ui->barAction->setChecked(true);

    // 监听它的勾选状态变化 控制状态栏的显隐
    connect(ui->barAction, &QAction::toggled, this, [=](bool cheked) {
        statusBar()->setVisible(cheked);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionSlot()
{
    ui->textEdit->clear();
    this->setWindowTitle("新建文本文档.txt");
}

void MainWindow::openActionSlot()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        "选择一个文件",
        "D:/Users/anime/Desktop",
        "Images (*.txt *.c *.cpp)");

    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请选择一个文件"));
    } else {
        qDebug() << fileName;
        QFile file(fileName);
        /*
         * QIODevice::ReadOnly：只读方式（常用于打开文件读取）
         * QIODevice::WriteOnly：只写方式（会清空原有内容）
         * QIODevice::Append：追加写入方式（在文件末尾追加，不会清空原有内容）
         * QIODevice::ReadWrite：读写方式
         * QIODevice::Text：文本模式（会自动处理 Windows/Linux 的换行符转换）
         */
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            // 成功打开 开始读取
            QTextStream in(&file);
            QString content = in.readAll();

            ui->textEdit->setPlainText(content);

            file.close();
        } else {
            QMessageBox::warning(this, tr("警告"), tr("文件加载失败!"));
        }
    }
}

void MainWindow::saveActionSlot()
{
    QString fileName = QFileDialog::getSaveFileName(
        this,
        "另存为",
        "D:/Users/anime/Desktop");

    if (fileName.isEmpty()) {
        return;  // 取消保存
    } else {
        QFile file(fileName);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);

            // 获取 textEdit 中的文本并写入文件
            out << ui->textEdit->toPlainText();

            file.close();

            this->setWindowTitle(fileName);
        } else {
            QMessageBox::warning(this, tr("警告"), tr("文件保存失败!"));
        }
    }
}

void MainWindow::quitActionSlot()
{
    this->close();
}

void MainWindow::clearActionSlot()
{
    ui->textEdit->clear();
}

void MainWindow::allActionSlot()
{
    ui->textEdit->selectAll();
}

void MainWindow::delActionSlot()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (cursor.hasSelection())
    {
        cursor.removeSelectedText();    // 仅删除选中的内容
    }
}

void MainWindow::copyActionSlot()
{
    /*
     * ui->textEdit->copy();  自动检查是否有选中的内容 如果有 就会将其复制到系统剪贴板中
     */
    QTextCursor cursor = ui->textEdit->textCursor();
    if (cursor.hasSelection())
    {
        QString selectedeText = cursor.selectedText();          // 获取选中的文本
        QGuiApplication::clipboard()->setText(selectedeText);   // 写入系统剪贴板
    }
}


void MainWindow::pasteActionSlot()
{
    ui->textEdit->paste();
}

void MainWindow::wdActionSlot()
{
    ui->textEdit->undo();
}

void MainWindow::magActionSlot()
{

    /*    // 获取当前的字体
     *    QFont font = ui->textEdit->font();
     *    // 增大字号(当前基础+2)
     *    font.setPointSize(font.pointSize() + 2);
     *    应用
     *    ui->textEdit->setFont(font);
     */
    ui->textEdit->zoomIn(1); // 放大 1 级界面缩放
}

void MainWindow::shrActionSlot()
{
    ui->textEdit->zoomOut(1); //缩小 1 级界面缩放
}

void MainWindow::updateCursorPosition()
{
    QTextCursor cursor = ui->textEdit->textCursor();

    // blockNumber() 从 0 开始
    int line =  cursor.blockNumber() + 1;
    // columnNumber() 表示光标在当前行的字符偏移量 从 0 开始
    int col = cursor.columnNumber() + 1;

    // 设置标签文本
    cursorPosLabel->setText(QString("行 %1   列 %2").arg(line).arg(col));
}

void MainWindow::updatePasteActionState()
{
    bool hasContent = !QApplication::clipboard()->text().isEmpty();

    if (pastesignal) {
        pastesignal->setEnabled(hasContent);
    }
    if (ui->pasteAction) {
        ui->pasteAction->setEnabled(hasContent);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *key)
{
    // 统一提取核心修饰符 同时兼容主键盘、小键盘及 NumLock 状态
    auto pureModifiers = key->modifiers() & (Qt::ControlModifier | Qt::ShiftModifier | Qt::AltModifier | Qt::MetaModifier);

    // 只有当按下且仅按下了 Ctrl 键时 才进入快捷键分流（如果是 Ctrl+Shift+N 则不进入）
    if (pureModifiers == Qt::ControlModifier)
    {
        switch (key->key())
        {
        // 文件与基础操作
        case Qt::Key_N:     newActionSlot();    break;
        case Qt::Key_O:     openActionSlot();   break;
        case Qt::Key_S:     saveActionSlot();   break;
        case Qt::Key_Q:     quitActionSlot();   break;
        case Qt::Key_Z:     wdActionSlot();     break;

        // 编辑与选择操作
        case Qt::Key_A:     allActionSlot();    break;
        case Qt::Key_C:     copyActionSlot();   break;
        case Qt::Key_V:     pasteActionSlot();  break;
        case Qt::Key_D:     delActionSlot();    break;
        case Qt::Key_R:     clearActionSlot();  break;

        // 放大（兼容主键盘+、= 以及小键盘+）
        case Qt::Key_Plus:
        case Qt::Key_Equal: magActionSlot();    break;

        // 缩小（兼容主键盘- 以及小键盘-）
        case Qt::Key_Minus: shrActionSlot();    break;

        default:
            // 如果是 Ctrl + 其他没定义的键，交还给父类处理
            QMainWindow::keyPressEvent(key);
            return;
        }

        // 关键一步: 只要成功触发了上面的任意一个快捷键 就标记该事件已被消费 阻止其继续传递
        key->accept();
        return;
    }

    // 如果没按下 Ctrl 键 或者按了 Ctrl+Alt 等其他组合 直接走默认逻辑
    QMainWindow::keyPressEvent(key);
}

void MainWindow::mousePressEvent(QMouseEvent *mouse)
{
    if (mouse->button() == Qt::RightButton)
    {
        if (editMenu)
        {
            // 核心: 使用 key->globalPosition().toPoint() 获取屏幕绝对坐标
            editMenu->exec(mouse->globalPosition().toPoint());
            mouse->accept();    // 标记事件已处理
            return;             // 退出函数
        }
    }
}