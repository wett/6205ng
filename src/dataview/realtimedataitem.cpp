#include "realtimedataitem.h"
#include "ui_realtimedataitem.h"

RealtimeDataItem::RealtimeDataItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RealtimeDataItem)
{
    ui->setupUi(this);


    ui->tableWidget_1->setRowCount(10);
    ui->tableWidget_1->setColumnCount(3);
    QStringList header;
    header << "Item" << "Num" << "unit";
    ui->tableWidget_1->setHorizontalHeaderLabels(header);
    ui->tableWidget_1->setItem(0, 0, new QTableWidgetItem("P+(0)"));
    ui->tableWidget_1->setItem(1, 0, new QTableWidgetItem("P+(1)"));
    ui->tableWidget_1->setItem(2, 0, new QTableWidgetItem("P+(2)"));
    ui->tableWidget_1->setItem(3, 0, new QTableWidgetItem("P+(3)"));

    ui->tableWidget_1->setItem(0, 1, new QTableWidgetItem("12.3456"));
    ui->tableWidget_1->setItem(1, 1, new QTableWidgetItem("12.3456"));
    ui->tableWidget_1->setItem(2, 1, new QTableWidgetItem("12.3456"));
    ui->tableWidget_1->setItem(3, 1, new QTableWidgetItem("12.3456"));

    ui->tableWidget_1->setItem(0, 2, new QTableWidgetItem("kWh"));
    ui->tableWidget_1->setItem(1, 2, new QTableWidgetItem("kWh"));
    ui->tableWidget_1->setItem(2, 2, new QTableWidgetItem("kWh"));
    ui->tableWidget_1->setItem(3, 2, new QTableWidgetItem("kWh"));

}

RealtimeDataItem::~RealtimeDataItem()
{
    delete ui;
}
