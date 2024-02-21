#include "Progression.h"
#include <cmath>

bool Progression::Init(double a0, double r) {
    // Перевірка на валідність вхідних даних
    if (fabs(r) < 1e-9) // перевірка на нульове значення r, щоб уникнути ділення на нуль, farbs - абсол. значення числа
        return false;

    first = a0;
    second = r;
    return true;
}

double Progression::elementJ(int j) const {
    // Обчислення j-го елементу прогресії за формулою a_j = a_0 * r^j
    return first * pow(second, j);
}
