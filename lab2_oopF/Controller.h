#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Motor.h"

class Controller {
public:
    static void regulateSpeed(Motor& motor, int targetSpeed);
};

#endif // CONTROLLER_H
