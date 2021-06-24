// ex2.11.cpp
//Левостороннее форматирование текста

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << setiosflags(ios::left) << setw(10) << "Фамилия" << setiosflags(ios::left) << setw(10) << "Имя"
		<< setiosflags(ios::left) << setw(16) << "Адрес" << setiosflags(ios::left) << setw(16) << "Город"
		<< endl << setfill('-') << setw(52) << " " << endl;
	cout << setfill(' ') << setiosflags(ios::left) << setw(10) << "Петров" << setw(10) << "Василий"
		<< setw(16) << "Кленовая 16" << setw(16) << "Санкт-Петербург" << endl
		<< setw(10) << "Иванов" << setw(10) << "Сергей"
		<< setw(16) << "Осиновая 3" << setw(16) << "Находка" << endl
		<< setw(10) << "Сидоров" << setw(10) << "Иван"
		<< setw(16) << "Березовая 21" << setiosflags(ios::left) << setw(16) << "Калининград" << endl
		<< setw(10) << "Петров" << setw(10) << "Василий"
		<< setw(16) << "Кленовая 16" << setiosflags(ios::right)<<setw(16) << "Санкт-Петербург" << endl;
    return 0;
}

