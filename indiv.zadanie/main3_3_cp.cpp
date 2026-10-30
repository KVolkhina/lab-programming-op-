#include <iostream>
#include <string>
#include <cctype>
#include <clocale>

int main() 
{ //Подключение кириллицы и ввод строки
    setlocale(LC_ALL, ".UTF8");

    std::string text;
    std::cout << "Введите строку: ";

    int buk = 0;
    int cif = 0;
    int prob = 0;
    int zn = 0;

    for (unsigned char ch : text) 
    {
        if (std::isdigit(ch)) 
        {
            cif++;
        }
        else if (std::isalpha(ch)) 
        {
            buk++;
        }
        else if (std::isspace(ch)) 
        {
            prob++;
        }
        else if (std::ispunct(ch)) 
        {
            zn++;
        }
    }

    std::cout << "Букв:             " << buk << "\n";
    std::cout << "Цифр:             " << cif << "\n";
    std::cout << "Пробелов:         " << prob << "\n";
    std::cout << "Знаков препинания: " << zn << "\n";

    return 0;
}