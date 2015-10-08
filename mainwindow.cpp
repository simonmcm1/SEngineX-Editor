#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionCube, SIGNAL(triggered(bool)), this, SLOT(AddCube()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddCube() {
    ui->scene_objects->addItem(new SceneObjectListItem("Cube"));
   // ui->scene_objects->addItem(tr("Cube"));
}

void MainWindow::AddPlane() {
    ui->scene_objects->addItem(tr("Plane"));
}

void MainWindow::AddDirectionalLight() {
    ui->scene_objects->addItem(tr("Directional Light"));
}

void MainWindow::AddPointLight() {
    ui->scene_objects->addItem(tr("Point Light"));
}

void MainWindow::AddGameObject() {
    ui->scene_objects->addItem(tr("GameObject"));
}
