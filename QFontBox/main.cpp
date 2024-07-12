#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("QtTutorial");
    QCoreApplication::setApplicationName("QtFontBox");

    Dialog w;
    w.show();
    return a.exec();
}
