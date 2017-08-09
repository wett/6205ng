#include "logindialog.h"
#include "ui_logindialog.h"

#include <QMessageBox>

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_LoginButton_clicked()
{
//    if(ui->usernameLineEdit->text() == tr("df6200") && ui->passwdLineEdit->text() == tr("62000026"))
    if (true)
    {
        accept();
    } else {
        QMessageBox::warning(this, tr("warning"), tr("user name or password error!"), QMessageBox::Yes);
    }
}

void loginDialog::on_clearButton_clicked()
{
    clearUsernameAndPasswdEditLines();
}

void loginDialog::clearUsernameAndPasswdEditLines()
{
    ui->usernameLineEdit->clear();
    ui->passwdLineEdit->clear();
    ui->usernameLineEdit->setFocus();
}
