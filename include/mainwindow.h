#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "parking_manager.h"
#include "parkingwidget.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(ParkingManager* manager, QWidget *parent = nullptr);
    ~MainWindow();

private:
    void setupUI();
    ParkingManager* parkingManager;
    ParkingWidget* parkingWidget;
};

#endif // MAINWINDOW_H
