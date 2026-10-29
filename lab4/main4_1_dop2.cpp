#include <iostream>

int main()
{  //Подключение кириллицы и ввод целого числа
    setlocale(LC_ALL, ".UTF8");
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
//Проверка положительное или отрицательное число, а также не является ли оно 0
    if (number > 0) {
        std::cout << "Число " << number << " - положительное\n";
    } else if (number < 0) {
        std::cout << "Число " << number << " - отрицательное\n";
    } else {
        std::cout << "Число равно нулю\n";
    }

    return 0;
}