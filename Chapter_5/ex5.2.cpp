// ex5.2.cpp: определяет точку входа для консольного приложения.
//Возведение числа в степень

#include "stdafx.h"
#include <iostream>
using namespace std;

double power(double n, int p = 2)
{
	double result = 1.0;
	for (int i = 0; i < p; i++)
		result *= n;
	return result;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int pow;
	double number, answer;
	cout << "Введите число: "; cin >> number;
	cout << "Введите степень: "; cin >> pow;
	answer = power(number, pow);
	cout << "Итог: " << answer<<endl;
    return 0;
}

