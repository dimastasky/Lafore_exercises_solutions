// ex2.9.cpp
//Сложение двух дробей

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int a, b, c, d, sumupper,sumdown;
	int stop = 1;
	char dummy = '/';
	do
	{
		cout << "Введите первую дробь: ";
		cin >> a >> dummy >> b;
		cout << "Введите вторую дробь: ";
		cin >> c >> dummy >> d;
		sumupper = a * d + b * c;
		sumdown = b * d;
		cout << "Сумма равна " << sumupper << dummy << sumdown << endl;
		cout << "Чтобы завершить работу введите 0" << endl;
		cin >> stop;
	}
	while (stop != 0);
    return 0;
}

