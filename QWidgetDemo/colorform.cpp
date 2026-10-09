#include "colorform.h"
#include "ui_colorform.h"

ColorForm::ColorForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ColorForm)
{
    ui->setupUi(this);

    btnGroupColor = new QButtonGroup(this);
    btnGroupColor->addButton(ui->redradioButton, 0);
    btnGroupColor->addButton(ui->greenradioButton, 1);
    btnGroupColor->addButton(ui->blueradioButton, 2);

    connect(btnGroupColor, &QButtonGroup::idClicked, this, &ColorForm::on_BtnGroupColor_Clicked);
}

ColorForm::~ColorForm()
{
    delete ui;
}

void ColorForm::on_BtnGroupColor_Clicked(int id)
{
    emit colorChanged(id);
}
