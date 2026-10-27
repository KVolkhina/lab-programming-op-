#include <iostream>
#include <iomanip>
#include <cmath>

int main() 
{
    setlocale(LC_ALL, ".UTF8");
    double a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Сумма: " << a + b << "\n";
    std::cout << "Разность: " << a - b << "\n";
    std::cout << "Произведение: " << a * b << "\n";
    std::cout << "Деление: " << a / b << "\n";
    std::cout << "Целочисленное деление: "
              << static_cast<int>(a) / static_cast<int>(b) << "\n";
    std::cout << "Остаток: " << std::fmod(a, b) << "\n";
    std::cout << "Степень: " << std::pow(a, b) << "\n";

    return 0;
}