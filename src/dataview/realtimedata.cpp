#include "realtimedata.h"
#include "ui_realtimedata.h"

RealtimeData::RealtimeData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::realtimeData)
{
    ui->setupUi(this);
    ui->listWidget->addItem("RS485_#1_1    5     000000001");
}

RealtimeData::~RealtimeData()
{
    delete ui;
}

void RealtimeData::on_listWidget_itemClicked(QListWidgetItem *item)
{
    RealtimeDataItem *realtimeDataItem = new RealtimeDataItem;
    realtimeDataItem->showFullScreen();
}
