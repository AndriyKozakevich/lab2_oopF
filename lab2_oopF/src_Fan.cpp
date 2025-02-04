#include "Fan.h"
#include <iostream>

using namespace std;

Fan::Fan() {}

void Fan::setupFan(int speed, int shutdownTime) {
    cout << " Налаштування вентилятора...\n";
    remote.configureFan(motor, speed, shutdownTime);
}

void Fan::showFanInfo() const {
    motor.display();
    remote.displaySettings();
}
