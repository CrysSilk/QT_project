#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;

    // 字体设置
    void onBtnGroupAlignmentClicked(int id);

    void onChkFontClicked(bool checked);

    void onTimeout();

    // 加载静态图片
    void loadStaticPixmap();

    // 加载动态图片
    void loadGifMovies();

private slots:
    // 文本换行
    void on_disableWrappushButton_clicked();

    void on_EnableWrappushButton_clicked();

private:
    Ui::Widget *ui;

    QButtonGroup *btnGroupAlignment;
    QTimer *timer;
};
#endif // WIDGET_H
