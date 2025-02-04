#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Motor.h"
#include "Controller.h"

class RemoteControl {
private:
    int shutdownTime; // Час вимкнення у хвилинах

public:
    RemoteControl();
    void setShutdownTime(int minutes);
    int getShutdownTime() const;
    void configureFan(Motor& motor, int speed, int shutdownTime);
    void displaySettings() const;
};

#endif // REMOTECONTROL_H
