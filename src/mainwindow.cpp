#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"

#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentTimeLabel = new QLabel;
    timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeUpdate()));
}

void MainWindow::timeUpdate()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QString timeStr = currentTime.toString("yyyy-MM-dd hh:mm:ss");
    currentTimeLabel->setText(timeStr);
    ui->statusBar->addPermanentWidget(currentTimeLabel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_returnButton_clicked()
{

}

void MainWindow::on_realtimeDataButton_clicked()
{
    RealtimeData *realtimedata = new RealtimeData ;
    realtimedata->showFullScreen();
}
