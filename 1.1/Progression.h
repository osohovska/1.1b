#pragma once

class Progression {
private:
    double first;  // Перший елемент прогресії a_0
    double second; // знаменник r

public:
    bool Init(double a0, double r); // Ініціалізує перший елемент та знаменник прогресії
    double elementJ(int j) const;    // Обчислює j-й елемент прогресії
};
