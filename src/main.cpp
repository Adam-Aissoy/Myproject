#include "mainwindow.h"
#include "parking_manager.h"
#ifdef TXT_MODE
#include <iostream>
#endif
#include <QApplication>

int main(int argc, char *argv[]) {
#ifdef TXT_MODE
    ParkingManager manager;
    manager.addParking(Parking(1, 5, 100, 100));
    manager.addVehicle(Vehicle(1, "Car", 30, 50));
    // Affichage texte
    manager.displayParkings();
    manager.displayVehicles();
    return 0;
#else
    QApplication app(argc, argv);
    ParkingManager manager;
    manager.addParking(Parking(1, 5, 100, 100));
    manager.addVehicle(Vehicle(1, "Car", 30, 50));
    MainWindow window(&manager);
    window.setWindowTitle("Parking Management System");
    window.resize(400, 300);
    window.show();
    return app.exec();
#endif
}
