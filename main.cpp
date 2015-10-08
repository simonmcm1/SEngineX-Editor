#include "mainwindow.h"
#include <QApplication>
#include <QString>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

SceneObjectListItem::SceneObjectListItem(std::string name) : QListWidgetItem(QString::fromStdString(name)) {
    Id = itemCount++;
}

int SceneObjectListItem::itemCount = 0;
