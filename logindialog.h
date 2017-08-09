#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = 0);
    ~loginDialog();

private slots:
    void on_LoginButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::loginDialog *ui;
    void clearUsernameAndPasswdEditLines();
};

#endif // LOGINDIALOG_H
