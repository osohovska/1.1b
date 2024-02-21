#include <iostream>
#include "Progression.h"

int main() {
   
    Progression progression;

    // Ініціалізація прогресії
    double a0, r;
    std::cout << "Enter a_0: ";
    std::cin >> a0;
    std::cout << "Enter the common ratio (r): "; // знаменник
    std::cin >> r;

    if (!progression.Init(a0, r)) {
        std::cout << "Invalid input for progression. Exiting..." << std::endl; //перевірка результату ініціалізації об'єкту progression
        return 1;
    }

    // Введення номеру елементу j
    int j;
    std::cout << "Enter the index (j) : ";
    std::cin >> j;

    // Обчислення та виведення j-го елементу прогресії
    std::cout << "The " << j << "-th element of the progression is: " << progression.elementJ(j) << std::endl;

    return 0;
}
