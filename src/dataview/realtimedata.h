#ifndef REALTIMEDATA_H
#define REALTIMEDATA_H

#include <QDialog>
#include <QListWidget>
#include "realtimedataitem.h"

namespace Ui {
class realtimeData;
}

class RealtimeData : public QDialog
{
    Q_OBJECT

public:
    explicit RealtimeData(QWidget *parent = 0);
    ~RealtimeData();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::realtimeData *ui;
};

#endif // REALTIMEDATA_H
