#include <iostream>

int main() 
{//Подключение кириллицы и ввод трех вещественных чисел
    setlocale(LC_ALL, ".UTF8");
    double a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;
  //Ввод вещественного числа и проверка введеных ранее чисел на максимум
    double maximum;
    if (a >= b && a >= c) {
        maximum = a;
    } else if (b >= a && b >= c) {
        maximum = b;
    } else {
        maximum = c;
    }
  //Вывод максисмума из трех чисел
    std::cout << "Максимум: " << maximum << "\n";

    return 0;
}