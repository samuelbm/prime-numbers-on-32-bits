#include "widget.h"

#include <QApplication>
#include <Qfile>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file ("file.dat");
    file.open (QIODevice :: WriteOnly);
    QDataStream out (& file);
    out << QString ("the answer is");
    out << (qint32) 42;
    QLabel myLabel;


//    Widget w;
//    w.show();
    return a.exec();
}
