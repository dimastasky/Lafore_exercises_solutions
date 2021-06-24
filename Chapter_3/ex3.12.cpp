// ex3.12.cpp: определяет точку входа для консольного приложения.
//Арифметические действия над дробями

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	char ch, znak;
	int a, b, c, d;
	float result;
	do
	{
		cout << "\nВведите первый операнд(дробь a/b): ";
		cin >> a >> ch >> b;
		cout << "Введите арифметическое действие: ";
		cin >> znak;
		cout << "Введите второй операнд (c/d): ";
		cin >> c >> ch >> d;
		switch (znak)
		{
		case '+':
			result = (a*d + b * c) / (b*d);
			break;
		case '-':
			result = (a*d - b * c) / (b*d);
			break;
		case '*':
			result = (a*c) / (b*d);
			break;
		case '/':
			result = (a*d) / (b*c);
			break;
		}
		cout << "Ответ: " << result;
		cout << "\nПродолжить (y/n)?";
		cin >> ch;
	}
	while (ch!= 'n');
    return 0;
}

