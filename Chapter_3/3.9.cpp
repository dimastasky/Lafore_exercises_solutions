// 3.9.cpp: определяет точку входа для консольного приложения.
//Комбинации рассадок гостей на ограниченное число мест

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned long guests, chairs, combination;
	char ch;
	do
	{
		cout << "К-во гостей должно быть больше чем к-во стульев." << endl;
		cout << "Введите количество гостей: ";
		cin >> guests;
		cout << "Введите количество мест: ";
		cin >> chairs;
		combination = guests;
		if (guests > chairs)
		{
			for (chairs; chairs > 1; chairs--)
			{
				guests--;
				combination = combination * guests;
				
			}
			cout << "Количество комбинаций = " << combination;
		}
		else cout << "К-во гостей должно быть больше чем к-во стульев.";
		cout << "\n Продолжить (y/n)? ";
		cin >> ch;
	} while (ch != 'n');

    return 0;
}

