#include <iostream>
#include <iomanip>

int main() 
{ //Подключение кириллицы и ввод вещественных чисел
    setlocale(LC_ALL, ".UTF8");
    double a, b;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;
  //Фиксирование точки и количества знаков после запятой
    std::cout << std::fixed << std::setprecision(2);
  //Подключение оператора switch и вывод ответа
    switch (operation) {
        case '+':
            std::cout << "Результат: " << a + b << "\n";
            break;
        case '-':
            std::cout << "Результат: " << a - b << "\n";
            break;
        case '*':
            std::cout << "Результат: " << a * b << "\n";
            break;
        case '/':
            if (b == 0) {
                std::cout << "Ошибка: деление на ноль!\n";
            } else {
                std::cout << "Результат: " << a / b << "\n";
            }
            break;
        default:
            std::cout << "Неизвестная операция\n";
    }

    return 0;
}