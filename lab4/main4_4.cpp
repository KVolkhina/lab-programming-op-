#include <iostream>
#include <cmath>
#include <iomanip>

int main() 
{ //Подключение кириллицы и ввод вещественного чисел
    setlocale(LC_ALL, ".UTF8");
    double a, b, c;
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;
  //Решение квадратного уравнения либо вывод некорректного ввода
    if (a == 0) {
        std::cout << "Это не квадратное уравнение\n";
    } else {
        double D = b*b - 4*a*c;
  //Фиксирование точки и количества знаков после запятой
        std::cout << std::fixed << std::setprecision(2);
  //Нахождение корней уравнения и их вывод
        if (D > 0) {
            double x1 = (-b + std::sqrt(D)) / (2*a);
            double x2 = (-b - std::sqrt(D)) / (2*a);
            std::cout << "Два корня: x1 = " << x1 
                      << ", x2 = " << x2 << "\n";
        } else if (D == 0) {
            double x = -b / (2*a);
            std::cout << "Один корень: x = " << x << "\n";
        } else {
            std::cout << "Нет действительных корней\n";
        }
    }

    return 0;
}