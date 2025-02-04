#include <iostream>
#include "Fan.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Fan fan;

    // Налаштовуємо вентилятор: швидкість 1500 RPM, вимкнення через 10 хв
    fan.setupFan(1500, 10);

    // Виводимо налаштування
    fan.showFanInfo();

    return 0;
}
