#ifndef FONTFORM_H
#define FONTFORM_H

#include <QWidget>

namespace Ui {
class FontForm;
}

class FontForm : public QWidget
{
    Q_OBJECT

public:
    explicit FontForm(QWidget *parent = nullptr);
    ~FontForm();

signals:
    void fontChanged(bool bold, bool italic, bool underline);

private slots:
    void on_ChkFont_Clicked();

private:
    Ui::FontForm *ui;
};

#endif // FONTFORM_H
