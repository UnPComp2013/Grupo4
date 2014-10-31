#include "project2.h"
#include "ui_project2.h"

project2::project2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::project2)
{
    ui->setupUi(this);
}

project2::~project2()
{
    delete ui;
}
