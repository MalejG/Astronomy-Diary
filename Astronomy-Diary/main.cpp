#include "AstronomyDiary.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AstronomyDiary w;
    w.show();
    return a.exec();
}
