#include "RemoteControl.h"
#include <iostream>

using namespace std;

RemoteControl::RemoteControl() : shutdownTime(0) {}

void RemoteControl::setShutdownTime(int minutes) {
    if (minutes < 0 || minutes > 300) {
        cerr << " Помилка: час вимкнення має бути в діапазоні 0 - 300 хв!\n";
        return;
    }
    shutdownTime = minutes;
}

int RemoteControl::getShutdownTime() const {
    return shutdownTime;
}

void RemoteControl::configureFan(Motor& motor, int speed, int shutdownTime) {
    cout << " Пульт керування: налаштування вентилятора...\n";
    Controller::regulateSpeed(motor, speed);
    setShutdownTime(shutdownTime);
}

void RemoteControl::displaySettings() const {
    cout << " Вентилятор вимкнеться через: " << shutdownTime << " хвилин\n";
}
