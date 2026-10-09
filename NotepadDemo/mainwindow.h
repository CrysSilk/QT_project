#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QClipboard>
#include <QApplication>
#include <QMimeData>
#include <QLabel>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QTimer>

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

    void keyPressEvent(QKeyEvent *key) override;

    void mousePressEvent(QMouseEvent * mouse) override;

private slots:
    void newActionSlot();

    void openActionSlot();

    void saveActionSlot();

    void quitActionSlot();

    void clearActionSlot();

    void allActionSlot();

    void delActionSlot();

    void copyActionSlot();

    void pasteActionSlot();

    void wdActionSlot();

    void magActionSlot();

    void shrActionSlot();

    void updatePasteActionState(); // 更新粘贴动作可用状态的槽函数

private:
    Ui::MainWindow *ui;
    QLabel *cursorPosLabel;        // 用于显示行列的标签
    void updateCursorPosition();   // 更新行列的槽函数
    QMenu *editMenu;               // 菜单指针
    QAction *pastesignal;          // 粘贴动作
};
#endif // MAINWINDOW_H
