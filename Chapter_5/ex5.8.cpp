// ex5.8.cpp: определяет точку входа для консольного приложения.
//обмен значениями первого и второго аргумента

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int&, int&);

int main()
{
	setlocale(LC_ALL, "");
	int n1, n2;
	cout << "Введите первое число: "; cin >> n1;
	cout << "Введите второе число: "; cin >> n2;
	swap(n1, n2);
	cout << "Числа поменялись местами.";
	cout << "\nПервое число = " << n1;
	cout << "\nВторое число = " << n2<<endl;

    return 0;
}

void swap(int& number1, int& number2)
{
	int temp;
	temp = number1;
	number1 = number2;
	number2 = temp;
}
