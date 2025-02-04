#ifndef FAN_H
#define FAN_H

#include "Motor.h"
#include "RemoteControl.h"

class Fan {
private:
    Motor motor;
    RemoteControl remote;

public:
    Fan();
    void setupFan(int speed, int shutdownTime);
    void showFanInfo() const;
};

#endif // FAN_H
