// ex3.8.cpp: определяет точку входа для консольного приложения.
//Складывает две суммы фунтов шиллингов и пенсов

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	int pound1, shilling1, pense1;
	int pound2, shilling2, pense2;
	int poundSum, shillingSum, penseSum;
	do
	{
		cout << "Введите первую сумму: ";
		cin >> pound1 >> ch >> shilling1 >> ch >> pense1;
		cout << "Введите вторую сумму: ";
		cin >> pound2 >> ch >> shilling2 >> ch >> pense2;

		poundSum = pound1 + pound2;
		shillingSum = shilling1 + shilling2;
		penseSum = pense1 + pense2;

		while(penseSum > 11)
		{
			shillingSum++;
			penseSum -= 12;
		}
		while (shillingSum > 19)
		{
			poundSum++;
			shillingSum -= 20;
		}
		cout << "Всего: " << poundSum << "." << shillingSum << "." << penseSum << " J";
		cout << "\n Продолжить (y/n)? ";
		cin >> ch;
	}
	while (ch != 'n');
    return 0;
}

