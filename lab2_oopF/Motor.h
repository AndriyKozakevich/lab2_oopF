#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>

class Motor {
private:
    int speed; // Ўвидк≥сть оберт≥в у RPM (оборотах на хвилину)

public:
    Motor();
    void setSpeed(int newSpeed);
    int getSpeed() const;
    void display() const;
};

#endif // MOTOR_H
