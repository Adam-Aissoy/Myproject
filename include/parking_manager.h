#ifndef PARKING_MANAGER_H
#define PARKING_MANAGER_H

#include "parking.h"
#include "vehicle.h"
#include <vector>

class ParkingManager {
public:
    void addVehicle(const Vehicle& vehicle);
    void addParking(const Parking& parking);
    std::vector<Vehicle> getVehicles() const { return vehicles; }
    std::vector<Parking> getParkings() const { return parkings; }
    void displayParkings() const;
    void displayVehicles() const;

private:
    std::vector<Vehicle> vehicles;
    std::vector<Parking> parkings;
};

#endif // PARKING_MANAGER_H
