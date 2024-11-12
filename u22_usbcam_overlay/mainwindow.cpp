#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "gcatlib.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setWindowTitle("/dev/video0");
    link_camera_to_winId("/dev/video0",this->winId());
}

MainWindow::~MainWindow()
{
    delete ui;
}

