#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>

class Motor {
private:
    int speed; // �������� ������ � RPM (�������� �� �������)

public:
    Motor();
    void setSpeed(int newSpeed);
    int getSpeed() const;
    void display() const;
};

#endif // MOTOR_H
