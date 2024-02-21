#pragma once

class Progression {
private:
    double first;  // ������ ������� ������� a_0
    double second; // ��������� r

public:
    bool Init(double a0, double r); // �������� ������ ������� �� ��������� �������
    double elementJ(int j) const;    // �������� j-� ������� �������
};
