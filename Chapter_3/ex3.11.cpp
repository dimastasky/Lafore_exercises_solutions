// ex3.11.cpp: определяет точку входа для консольного приложения.
//Калькулятор для фунтов шиллингов и пенсов

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char ch, znak;
	int pound1, pound2, poundSum, number, shilling1, shilling2, shillingSum, pense1, pense2, penseSum;
	do
	{
		pound1 = pound2 = poundSum = number = shilling1 = shilling2 = shillingSum = pense1 = pense2 = penseSum = 0;
		cout << "\nВведите 1ю сумму: ";
		cin >> pound1 >> ch >> shilling1 >> ch >> pense1;
		cout << "Введите арифметическое действие: ";
		cin >> znak;
		switch (znak)
		{
		case '+':
			cout << "Введите 2ю сумму для сложения: ";
			cin >> pound2 >> ch >> shilling2 >> ch >> pense2;
			poundSum = pound1 + pound2;
			shillingSum = shilling1 + shilling2;
			penseSum = pense1 + pense2;
			break;
		case '-':
			cout << "Введите 2ю сумму для вычитания: ";
			cin >> pound2 >> ch >> shilling2 >> ch >> pense2;
			poundSum = pound1 - pound2;
			shillingSum = shilling1 - shilling2;
			penseSum = pense1 - pense2;
			while (penseSum < 0)
			{
				shillingSum--;
				penseSum += 12;
			}
			while (shillingSum < 0)
			{
				poundSum--;
				shillingSum += 20;
			}
			break;
		case '*':
			cout << "Введите число для умножения: ";
			cin >> number;
			poundSum = pound1 * number;
			shillingSum = shilling1 * number;
			penseSum = pense1 * number;
			break;
		case '/':
			cout << "Введите число для деления: ";
			cin >> number;
			poundSum = pound1 / number;
			shillingSum = shilling1 / number;
			penseSum = pense1 / number;
			break;
		}
		while (penseSum >= 12)
		{
			shillingSum++;
			penseSum -= 12;
		}
		while (shillingSum >= 20)
		{
			poundSum++;
			shillingSum -= 20;
		}
		cout << "Ответ: " << poundSum << "." << shillingSum << "." << penseSum << " J"<<endl;
		cout << "Произвести еще расчет (y/n)? ";
		cin >> ch;
	} while (ch != 'n');
    return 0;
}

