#include <iostream>
#include <iomanip>
#include <cmath>
  //Объявление функции (округление до одного знака после запятой)
double round_to_1_decimal(double x)
{
    return std::round(x * 10.0) / 10.0;
}
int main()
{ //Ввод роста и веса, расчет ИМТ
    setlocale(LC_ALL, ".UTF8");
    double a, b;
    std::cout << "Введите вес(кг): ";
    std::cin >> a;
    std::cout << "Введите рост(м): ";
    std::cin >> b;
    double imt = round_to_1_decimal(a/(b*b));
    std::cout <<"ИМТ: " << imt;
  //Соответствие между массой тела и его ростом
    if (imt < 0) {
        std::cout << " Некорректное ввод\n";
    } 
    else if (imt < 18.5) {
        std::cout << " Недостаточная масса тела\n";
    } 
    else if (imt >= 18.5 && imt <= 24.9) {
        std::cout << " Нормальная масса тела\n";
    } 
    else if (imt >= 25 && imt <= 29.9) {
        std::cout <<  " Избыточная масса тела\n";
    } 
    else if (imt >= 30 && imt <= 34,9) {
        std::cout << " Ожирение I степени \n";
    }
    else if (imt >= 35 && imt <= 39,9) {
        std::cout << " Ожирение II степени \n";
    }
    else{
        std::cout << " Ожирение III степени\n";
    }
    return 0;
}