#include <iostream>

int main() 
{ //Подключение кириллицы и ввод целого числа
    setlocale(LC_ALL, ".UTF8");
    int age;
    std::cout << "Введите возраст: ";
    std::cin >> age;
  //Классификация возраста и вывод
    if (age < 0) {
        std::cout << "Некорректный возраст\n";
    } else if (age <= 12) {
        std::cout << "Ребёнок\n";
    } else if (age <= 17) {
        std::cout << "Подросток\n";
    } else if (age <= 64) {
        std::cout << "Взрослый\n";
    } else {
        std::cout << "Пожилой\n";
    }

    return 0;
}