#include <iostream>
#include <QApplication>

#include "taskwindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    TaskWindow window;
    window.show();

    return app.exec();
}
