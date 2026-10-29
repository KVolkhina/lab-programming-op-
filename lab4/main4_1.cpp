#include <iostream>

int main() 
{ //Подключение кириллицы и ввод целого числа
    setlocale(LC_ALL, ".UTF8");
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
  //Проверка на четность/нечетность и вывод 
    if (number % 2 == 0) {
        std::cout << "Число " << number << " - чётное\n";
    } else {
        std::cout << "Число " << number << " - нечётное\n";
    }

    return 0;
}