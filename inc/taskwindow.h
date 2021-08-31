#ifndef TASKWINDOW_H
#define TASKWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QScopedPointer>
#include <QTreeWidget>
#include <QLabel>

class TaskWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit TaskWindow(QWidget *parent = nullptr);

signals:

public slots:

private:
    QWidget* interface;
    QPushButton* addButton;
    QPushButton* editButton;
    QPushButton* removeButton;
    QPushButton* quitButton;
    QTreeWidget* taskTree;
};

#endif // TASKWINDOW_H
