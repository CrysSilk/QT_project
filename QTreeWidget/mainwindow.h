#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QTreeWidgetItem>

class QAction;
class QDockWidget;
class QResizeEvent;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    enum class ImageDisplayMode
    {
        ActualSize,
        FitWidth,
        FitHeight
    };

    // 自定义树节点类型
    enum TreeItemType
    {
        // 根节点类型
        RootItem = QTreeWidgetItem::UserType + 1,
        // 文件夹节点类型
        FolderItem,
        // 图片文件节点类型
        ImageItem
    };

    // QTreeWidget的列编号
    // 节点名称 节点类型
    enum TreeColum
    {
        // 节点名称列
        NameColumn = 0,
        // 节点类型列
        TypeColumn = 1
    };

    // QTreeWidgetItem的自定义数据角色
    enum ItemDataRole
    {
        // 保存文件夹路径或图片文件路径
        PathRole = Qt::UserRole + 1
    };

private:
    // 树控件、预览区、信号连接等基础配置
    void setupUiState();

    // 将树控件放入左侧可停靠面板
    void setupTreeDock();

    // 创建工具栏动作及连接槽函数
    void setupActions();

    // 初始化树控件 并创建唯一的根节点
    void initTree();

    // 更新工具栏按钮
    void updateActionState();

    // 加载指定路径的图片
    void showImage(const QString &filePath);

    // 将图片绘制到右侧预览区
    void updateImagePreview();

    // 清空图片预览区域并显示提示信息
    void clearImagePreview(const QString &message = QString());

    // 获取当前选中的节点
    QTreeWidgetItem *currentItem() const;

    // 获取树控件的根节点
    QTreeWidgetItem *rootItem() const;

    // 判断节点是否为根节点或文件夹节点
    bool isFolderItem(QTreeWidgetItem *item) const;

    //  遍历指定节点及其所有子节点
    void scanItem(QTreeWidgetItem *item, int level = 0);

    // 获取适合添加子节点的父节点
    QTreeWidgetItem *getInsertParent(QTreeWidgetItem *current) const;

    // 设置节点及其所有子节点的复选框状态
    void setChildrenCheckState(QTreeWidgetItem *item, Qt::CheckState state);

protected:
    // 窗口尺寸变化的重写
    void resizeEvent(QResizeEvent *event) override;

private slots:
    // 添加文件夹节点
    void addFolder();

    // 添加图片文件节点
    void addImageFile();

    // 删除当前节点
    void deleteCurrentItem();

    // 遍历整棵树
    void scanTree();

    // 当前选中节点发生变化
    void on_CurrentItem_Changed(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    // 当前节点复选框状态发生变化
    void on_Item_Changed(QTreeWidgetItem *Item, int column);

    // 图片放大1.25倍
    void zoomIn();

    // 图片缩小1.23倍
    void zoomOut();

    // 恢复原始像素大小
    void showActualSize();

    // 按预览区高度缩放
    void fitToWidth();

    // 按预览区宽度缩放
    void fitToHeight();

    // 目录面板浮动或固定
    void toggleTreeDockFloating();

    // 显示或隐藏目录
    void toggleTreeDockVisible();

private:
    Ui::MainWindow *ui;

    // 左侧“相簿目录”的停靠窗口
    QDockWidget *m_treeDock = nullptr;

    // “删除”工具栏按钮对应的动作对象
    QAction *m_deleteAction = nullptr;

    // “浮动目录 / 固定目录”按钮对应的动作对象
    QAction *m_dockFloatingAction = nullptr;

    // “隐藏目录 / 显示目录”按钮对应的动作对象
    QAction *m_dockVisibleAction = nullptr;

    // 保存当前选中的图片原图
    QPixmap m_originalPixmap;

    // 记录当前缩放比例
    qreal m_zoomFactor = 1.0;

    // 记录当前图片显示模式
    ImageDisplayMode m_displayMode = ImageDisplayMode::ActualSize;
};
#endif // MAINWINDOW_H
