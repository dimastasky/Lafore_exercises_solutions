// ex2.7.cpp: определяет точку входа для консольного приложения.
//celsium to farenheit

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int stop = 1;
	float temperature;

	do
	{
		cout << "Введите температуру в гр. по цельсию: ";
		cin >> temperature;
		cout << temperature << "C= " << temperature * 1.8 + 32 << "F= " << temperature + 273.15 << "K" << endl;
		cout << "Введите '0' чтобы завершить работу" << endl;
		cin >> stop;
	} while (stop != 0);
    return 0;
}

