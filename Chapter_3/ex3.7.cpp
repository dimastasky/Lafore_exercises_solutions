// ex3.7.cpp: определяет точку входа для консольного приложения.
//Вложение денег с фиксированной процентной ставкой

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float start, stavka, profit;
	int years;
	char ch;
	do
	{
		cout << "Введите начальный вклад: ";
		cin >> start;
		cout << "Введите число лет: ";
		cin >> years;
		cout << "Введите процентную ставку: ";
		cin >> stavka;
		stavka *= 0.01;
		profit = start;
		for (int i = 0; i < years; i++)
			profit = profit + (profit*stavka);
		cout << "\nЧерез " << years << " лет вы получите " << fixed << setprecision(2) << profit << " $$$";
		cout << "\nПроизвести еще одно вычисление (y/n)?";
		cin >> ch;
	}
	while (ch != 'n');
    return 0;
}

