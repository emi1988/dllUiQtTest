#include "formdll.h"
#include "ui_formdll.h"

FormDll::FormDll(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDll)
{
    ui->setupUi(this);
}

FormDll::~FormDll()
{
    delete ui;
}
