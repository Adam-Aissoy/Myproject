#ifndef PARKING_H
#define PARKING_H

class Parking {
public:
    Parking(int id, int capacity, int posX, int posY);
    int getId() const;
    int getCapacity() const;
    int getX() const;
    int getY() const;

private:
    int id;
    int capacity;
    int posX;
    int posY;
};

#endif // PARKING_H
