#include <iostream>
#include <iomanip>
#include <algorithm>

int main() 
{
    setlocale(LC_ALL, ".UTF8");
    double a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    double average = (a + b + c) / 3.0;
    double minimum = std::min({a, b, c});
    double maximum = std::max({a, b, c});

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднее арифметическое: " << average << "\n";
    std::cout << "Минимум: " << minimum << "\n";
    std::cout << "Максимум: " << maximum << "\n";

    return 0;
}