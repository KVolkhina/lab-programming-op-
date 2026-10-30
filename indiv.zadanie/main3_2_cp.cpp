#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <clocale>
#include <windows.h>
//Вводим команду, что бы не писать кадждый раз std::
using namespace std;

int charToVal(char ch)
{
    setlocale(LC_ALL, ".UTF8");
    ch = toupper(static_cast<unsigned char>(ch)); //Привод к верхнему регистру
    if (ch >= '0' && ch <= '9') return ch - '0'; //Если цифра 0 или 9 выведет 0
    if (ch >= 'A' && ch <= 'F') return ch - 'A' + 10; //Если символ буква выведет ее числовое значение
    return -1; 
}

char valToChar(int v) 
{ //Обратное преобразование число - символ
    const string c = "0123456789ABCDEF";
    if (v >= 0 && v < 16) return c[v];
    return '?'; 
}
//Перевод строки v из системы b1 в систему b2
string conv_int(string v, int b1, int b2) 
{
    setlocale(LC_ALL, ".UTF8");
    if (b1 < 2 || b1 > 16 || b2 < 2 || b2 > 16) {
        return "Err: основание должно быть от 2 до 16";
    }
    long long i = 0;
    
    for (char ch : v) //Цикл перебирает каждый символ строки
     {
        int val = charToVal(ch);
        if (val == -1 || val >= b1) {
            return string("Err: недопустимая ошибка") + to_string(b1); //Возврат ощибки если символ 
        }
        i = i * b1 + val; //Перевод в 10 систему, сдвигаем на разряд и добавляем новую цифру
    }
    
    if (i == 0) 
    {
        return "0"; //Если число нулевое, возвращаем 0
    }
    
    string r = ""; //Результат в новой СС (в обратном порядке)
    while (i > 0) //Повторяем цикл пока i > 0
    {
        r += valToChar(i % b2); //Перевод строки в цифру и добавление ее в конец
        i /= b2; //Отбрасывание отработанной цифры
    }
  //Разворот строки и возвращение результата  
    reverse(r.begin(), r.end()); 
    return r;
}

int main()
{
    SetConsoleCP(65001);      
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "UTF8");

    string number;
    int b1, b2;

    cout << "Введите число: ";
    cin >> number;

    cout << "Из какой системы счисления (2..16): ";
    cin >> b1;

    cout << "В какую систему счисления (2..16): ";
    cin >> b2;

    string result = conv_int(number, b1, b2);
    cout << "Результат: " << result << endl;

    return 0;
}