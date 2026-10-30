#include <iostream>
#include <clocale>
//Вводим команду, что бы не писать кадждый раз std::
using namespace std;

int main() 
{
    setlocale(LC_ALL, ".UTF8");

    int b_day, b_month, b_year; 
    int c_day, c_month, c_year; 
  //Ввод дат
    cout << "Введите дату рождения (день месяц год): ";
    cin >> b_day >> b_month >> b_year;

    cout << "Введите сегодняшнюю дату (день месяц год): ";
    cin >> c_day >> c_month >> c_year;
  //Ввод возраста как год на данный момент - год рождения
    int age = c_year - b_year;
  //Проверка на то, что в текущем году день рождения еще не наступило
    if (c_month < b_month || (c_month == b_month && c_day < b_day)) 
    {
        age--; 
    } 
  //Вывод возраста после всех проверок
    cout << "Возраст: " << age << " лет (год/года)" << endl;

    return 0;
}