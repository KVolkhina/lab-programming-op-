#include <iostream>

int main() 
{ //Подключение кириллицы и ввод трех вещественных чисел
    setlocale(LC_ALL, ".UTF8");
    double a, b, c;
    std::cout << "Введите сторону a: ";
    std::cin >> a;
    std::cout << "Введите сторону b: ";
    std::cin >> b;
    std::cout << "Введите сторону c: ";
    std::cin >> c;
  //Определение типа треугольника и вывод
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            std::cout << "Равносторонний треугольник\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Равнобедренный треугольник\n";
        } else {
            std::cout << "Разносторонний треугольник\n";
        }
    } else {
        std::cout << "Треугольник не существует\n";
    }

    return 0;
}