#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonQuit,
            SIGNAL(clicked(bool)),
            this,
            SLOT(sair()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sair()
{
    exit(0);
}

void MainWindow::copiaTexto()
{
    ui->textBrowser->setText(ui->textEdit->toPlainText());
}

