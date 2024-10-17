#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(int id, const std::string& type, int posX, int posY);
    int getId() const;
    std::string getType() const;
    int getX() const;
    int getY() const;
    void move(int dx, int dy);

private:
    int id;
    std::string type;
    int posX;
    int posY;
};

#endif // VEHICLE_H
