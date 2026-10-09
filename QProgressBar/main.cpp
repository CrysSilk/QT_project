#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Fusion");   // 加这一行
    Widget w;
    w.show();
    return a.exec();
}