#include "realtimedata.h"
#include "ui_realtimedata.h"

realtimeData::realtimeData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::realtimeData)
{
    ui->setupUi(this);
}

realtimeData::~realtimeData()
{
    delete ui;
}
