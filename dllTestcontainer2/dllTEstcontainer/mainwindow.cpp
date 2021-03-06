#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "uidll2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget *widgetFromDll;
    UiDll2 *myUiDll = new UiDll2();

    widgetFromDll = myUiDll->getWidget();

    MainWindow::setCentralWidget(widgetFromDll);

    widgetFromDll->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
