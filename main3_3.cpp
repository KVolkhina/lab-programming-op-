#include <iostream>
#include <iomanip>

int main() 
{ //Подключение кириллицы и ввод количества секунд
    setlocale(LC_ALL, ".UTF8");
    int totalSeconds;
    std::cout << "Введите количество секунд: ";
    std::cin >> totalSeconds;
  //Перевод секунд в часы, минуты, секунды
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;
  //Вывод полученных значений в формате часы:минуты:секунды  
    std::cout << std::setfill('0')
              << std::setw(2) << hours << ":"
              << std::setw(2) << minutes << ":"
              << std::setw(2) << seconds << "\n";

    return 0;
}