#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    loginDialog dlg;
    dlg.showFullScreen();
    if (dlg.exec() == QDialog::Accepted)
    {
        w.showFullScreen();
        return a.exec();
    }else {
        return 0;
    }
}
