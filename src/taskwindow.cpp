#include "taskwindow.h"
#include <QGridLayout>
#include <QApplication>
#include <iostream>

TaskWindow::TaskWindow(QWidget *parent)
    : QMainWindow(parent),
      interface(new QWidget)
{
    std::cerr << "creating a new window\n";
    setCentralWidget(interface);
    addButton = new QPushButton("Add task", interface);
    editButton = new QPushButton("Edit task", interface);
    removeButton = new QPushButton("Remove task", interface);
    quitButton = new QPushButton("Quit", interface);
    taskTree = new QTreeWidget(interface);

    QGridLayout* layout = new QGridLayout();
    layout->addWidget(taskTree, 0, 0, 7, 1);
    layout->addWidget(addButton, 0, 1);
    layout->addWidget(editButton, 1, 1);
    layout->addWidget(removeButton, 2, 1);
    layout->addWidget(quitButton, 3, 1);
    interface->setLayout(layout);

    this->resize(640, 480);

    connect(quitButton, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}
