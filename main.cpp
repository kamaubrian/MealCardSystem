#include "admin.h"
#include <QApplication>
#include <QSize>
#include <QStyle>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    admin w;
    w.setFixedSize(QSize(420,250));
    w.setGeometry(
                QStyle ::alignedRect(
                    Qt::LeftToRight,
                    Qt::AlignCenter,
                    w.size(),
                    qApp->desktop()->availableGeometry()
                    )
                );
    w.setWindowTitle("Ark Holdings Limited\t\t\t\t\t\tVersion 0.0.1");
    w.show();
    return a.exec();
}
