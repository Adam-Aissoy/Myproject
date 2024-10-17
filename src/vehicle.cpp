#include "vehicle.h"

Vehicle::Vehicle(int id, const std::string& type, int posX, int posY)
    : id(id), type(type), posX(posX), posY(posY) {}

int Vehicle::getId() const { return id; }
std::string Vehicle::getType() const { return type; }
int Vehicle::getX() const { return posX; }
int Vehicle::getY() const { return posY; }
void Vehicle::move(int dx, int dy) { posX += dx; posY += dy; }
