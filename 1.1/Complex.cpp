#include "Progression.h"
#include <cmath>

bool Progression::Init(double a0, double r) {
    // �������� �� �������� ������� �����
    if (fabs(r) < 1e-9) // �������� �� ������� �������� r, ��� �������� ������ �� ����, farbs - �����. �������� �����
        return false;

    first = a0;
    second = r;
    return true;
}

double Progression::elementJ(int j) const {
    // ���������� j-�� �������� ������� �� �������� a_j = a_0 * r^j
    return first * pow(second, j);
}
