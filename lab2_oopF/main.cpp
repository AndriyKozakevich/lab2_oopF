#include <iostream>
#include "Fan.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Fan fan;

    // ����������� ����������: �������� 1500 RPM, ��������� ����� 10 ��
    fan.setupFan(1500, 10);

    // �������� ������������
    fan.showFanInfo();

    return 0;
}
