#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void AddCube();
    void AddPlane();
    void AddDirectionalLight();
    void AddPointLight();
    void AddGameObject();
};

class SceneObjectListItem : public QListWidgetItem {
    static int itemCount;
public:
    SceneObjectListItem(std::string name);
    int Id;
};

#endif // MAINWINDOW_H
