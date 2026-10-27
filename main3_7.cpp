#include <iostream>
#include <iomanip>

int main() 
{
    setlocale(LC_ALL, ".UTF8");
    std::cout << "Конвертер валют\n";
    std::cout << "1. Перевод USD в RUB\n";
    std::cout << "2. Перевод EUR в RUB\n";
    std::cout << "3. Перевод RUB в USD\n";
    std::cout << "4. Перевод RUB в EUR\n";

    int choice;
    std::cout << "Ваш выбор (1-4): ";
    std::cin >> choice;

    std::cout << std::fixed << std::setprecision(2);

    if (choice == 1) {
        double usd;
        std::cout << "Введите сумму в USD: ";
        std::cin >> usd;
        double rub = usd * 92.5;
        std::cout << usd << " USD = " << rub << " RUB\n";
    } else if (choice == 2) {
        double eur;
        std::cout << "Введите сумму в EUR: ";
        std::cin >> eur;
        double rub = eur * 100.0;
        std::cout << eur << " EUR = " << rub << " RUB\n";
    } else if (choice == 3) {
        double rub;
        std::cout << "Введите сумму в RUB: ";
        std::cin >> rub;
        double usd = rub / 92.5;
        std::cout << rub << " RUB = " << usd << " USD\n";
    } else if (choice == 4) {
        double rub;
        std::cout << "Введите сумму в RUB: ";
        std::cin >> rub;
        double eur = rub / 100.0;
        std::cout << rub << " RUB = " << eur << " EUR\n";
    } else {
        std::cout << "Некорректный выбор\n";
    }

    return 0;
}