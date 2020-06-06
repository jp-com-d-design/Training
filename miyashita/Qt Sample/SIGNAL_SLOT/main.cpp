#include "SIGNAL_SLOT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SIGNAL_SLOT w;

    w.sigslo(&a);
    w.show();
    return a.exec();
}
