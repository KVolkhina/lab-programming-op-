#include <iostream>

int main()
{ //Подключение кириллицы и ввод целого числа
    setlocale(LC_ALL, ".UTF8");
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
  //Проверка на делимость числа на 3 и вывод 
    if (number % 3 == 0) {
        std::cout << "Число " << number << " делится на 3\n";
    } else {
        std::cout << "Число " << number << " не делится на 3\n";
    }

    return 0;
}