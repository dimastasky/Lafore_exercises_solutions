// ex3.10.cpp: определяет точку входа для консольного приложения.
//Расчет времени для накопления необходимой суммы

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	float years, start, stavka, result;
	do
	{
		years = 0;
		cout << "Введите начальный вклад: ";
		cin >> start;
		cout << "Введите процентную ставку: ";
		cin >> stavka;
		cout << "Введите желаемый результат: ";
		cin >> result;
		stavka *= 0.01;
		do
		{
			start = start + (start * stavka);
			years++;
		} 
		while (start <= result);
		years = static_cast<int>(years);
		cout << "\n Чтобы достичь желаемого результата вам понадобится " << years << " лет.";
		cout << "\n Произвести еще расчет(y/n)?";
		cin >> ch;
	} while (ch != 'n');
    return 0;
}

