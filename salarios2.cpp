#include "salarios2.h"
#include "ui_salarios2.h"

Salarios2::Salarios2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Salarios2)
{
    ui->setupUi(this);
}

Salarios2::~Salarios2()
{
    delete ui;
}

