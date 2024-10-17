#include "parking_manager.h"
#include <iostream>

void ParkingManager::addVehicle(const Vehicle& vehicle) {
    vehicles.push_back(vehicle);
}

void ParkingManager::addParking(const Parking& parking) {
    parkings.push_back(parking);
}

void ParkingManager::displayParkings() const {
    for (const auto& parking : parkings) {
        std::cout << "Parking ID: " << parking.getId()
                  << " | Capacity: " << parking.getCapacity()
                  << " | Position: (" << parking.getX() << ", " << parking.getY() << ")\n";
    }
}

void ParkingManager::displayVehicles() const {
    for (const auto& vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle.getId()
                  << " | Type: " << vehicle.getType()
                  << " | Position: (" << vehicle.getX() << ", " << vehicle.getY() << ")\n";
    }
}
