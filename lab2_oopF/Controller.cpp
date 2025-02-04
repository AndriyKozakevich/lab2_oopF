#include "Controller.h"
#include <iostream>

using namespace std;

void Controller::regulateSpeed(Motor& motor, int targetSpeed) {
    cout << " Контролер регулює швидкість...\n";
    motor.setSpeed(targetSpeed);
}
