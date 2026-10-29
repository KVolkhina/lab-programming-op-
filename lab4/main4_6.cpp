#include <iostream>

int main() 
{ //Подключение кириллицы и ввод целого числа
    setlocale(LC_ALL, ".UTF8");
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;
  //Проверка года на високосность и вывод
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " — високосный год\n";
    } else {
        std::cout << year << " — не високосный год\n";
    }

    return 0;
}