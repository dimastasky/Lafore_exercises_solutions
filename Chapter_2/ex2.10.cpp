// ex2.10.cpp
//old Britain money system(pounds,shillings,penses) to new (pounds and penses)

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float pounds, shillings, penses,f;
	cout << "Введите количество фунтов: ";
	cin >> pounds;
	cout << "Введите количество шиллингов: ";
	cin >> shillings;
	cout << "Введите количество пенсов: ";
	cin >> penses;
	f = pounds + (shillings + penses / 12) / 20;
	cout << "Десятичных фунтов: " << f;


    return 0;
}

