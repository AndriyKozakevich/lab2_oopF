#include "Controller.h"
#include <iostream>

using namespace std;

void Controller::regulateSpeed(Motor& motor, int targetSpeed) {
    cout << " ��������� ������� ��������...\n";
    motor.setSpeed(targetSpeed);
}
