#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    loginDialog dlg;
//    dlg.showFullScreen();
    dlg.show();
    if (dlg.exec() == QDialog::Accepted)
    {
//        w.showFullScreen();
        w.show();
        return a.exec();
    }else {
        return 0;
    }
}
