// ex4.5.cpp: определяет точку входа для консольного приложения.
//Дата

#include "stdafx.h"
#include <iostream>
using namespace std;

struct date
{
	int day;
	int mounth;
	int year;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	date date1;
	char ch = '/';
	cout << "Введите дату в формате дд/мм/гггг : ";
	cin >> date1.day >> date1.mounth >> date1.year;
	cout << "Введеннная дата: " << date1.day << ch << date1.mounth << ch << date1.year << endl;
    return 0;
}

