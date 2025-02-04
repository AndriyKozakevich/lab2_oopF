#include "Motor.h"
#include <iostream>

using namespace std;

Motor::Motor() : speed(0) {} // Початкова швидкість 0 RPM

void Motor::setSpeed(int newSpeed) {
    if (newSpeed < 0 || newSpeed > 3000) {
        cerr << " Помилка: швидкість має бути в діапазоні 0 - 3000 RPM!\n";
        return;
    }
    speed = newSpeed;
}

int Motor::getSpeed() const {
    return speed;
}

void Motor::display() const {
    cout << " Поточна швидкість двигуна: " << speed << " RPM\n";
}
