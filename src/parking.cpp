#include "parking.h"

Parking::Parking(int id, int capacity, int posX, int posY)
    : id(id), capacity(capacity), posX(posX), posY(posY) {}

int Parking::getId() const {
    return id;
}

int Parking::getCapacity() const {
    return capacity;
}

int Parking::getX() const {
    return posX;
}

int Parking::getY() const {
    return posY;
}
