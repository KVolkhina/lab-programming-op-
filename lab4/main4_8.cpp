#include <iostream>

int main() 
{ 
    // Подключение кириллицы и ввод целого числа
    setlocale(LC_ALL, ".UTF8");
    
    int hour;
    std::cout << "Введите текущий час (от 0 до 23): ";
    std::cin >> hour;

    // Проверка на корректность ввода
    if (hour < 0 || hour > 23) {
        std::cout << "Некорректное время. Введите число от 0 до 23.\n";
    } 
    // Определение времени суток
    else if (hour >= 6 && hour <= 11) {
        std::cout << "Утро\n";
    } 
    else if (hour >= 12 && hour <= 17) {
        std::cout << "День\n";
    } 
    else if (hour >= 18 && hour <= 23) {
        std::cout << "Вечер\n";
    } 
    else {

        std::cout << "Ночь\n";
    }

    return 0;
}