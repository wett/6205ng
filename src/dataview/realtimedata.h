#ifndef REALTIMEDATA_H
#define REALTIMEDATA_H

#include <QDialog>

namespace Ui {
class realtimeData;
}

class realtimeData : public QDialog
{
    Q_OBJECT

public:
    explicit realtimeData(QWidget *parent = 0);
    ~realtimeData();

private:
    Ui::realtimeData *ui;
};

#endif // REALTIMEDATA_H
