#include "maindemo.h"
#include "ui_maindemo.h"

MainDemo::MainDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainDemo)
{
    ui->setupUi(this);
}

MainDemo::~MainDemo()
{
    delete ui;
}
