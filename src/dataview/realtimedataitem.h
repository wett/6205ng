#ifndef REALTIMEDATAITEM_H
#define REALTIMEDATAITEM_H

#include <QDialog>

namespace Ui {
class RealtimeDataItem;
}

class RealtimeDataItem : public QDialog
{
    Q_OBJECT

public:
    explicit RealtimeDataItem(QWidget *parent = 0);
    ~RealtimeDataItem();

private:
    Ui::RealtimeDataItem *ui;
};

#endif // REALTIMEDATAITEM_H
