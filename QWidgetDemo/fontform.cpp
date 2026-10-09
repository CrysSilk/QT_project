#include "fontform.h"
#include "ui_fontform.h"

FontForm::FontForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FontForm)
{
    ui->setupUi(this);

    connect(ui->BoldcheckBox, &QCheckBox::clicked, this, &FontForm::on_ChkFont_Clicked);
    connect(ui->underlinecheckBox, &QCheckBox::clicked, this, &FontForm::on_ChkFont_Clicked);
    connect(ui->ltaliccheckBox, &QCheckBox::clicked, this, &FontForm::on_ChkFont_Clicked);
}

FontForm::~FontForm()
{
    delete ui;
}

void FontForm::on_ChkFont_Clicked()
{
    emit fontChanged(ui->BoldcheckBox->isChecked(),
                     ui->ltaliccheckBox->isChecked(),
                     ui->underlinecheckBox->isChecked());
}
