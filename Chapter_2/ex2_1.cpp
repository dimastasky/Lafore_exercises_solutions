//ex2_1
//Переводит число галлонов в кубические футы

#include "stdafx.h"
#include <iostream>
#include "gallonsToCubefoots.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float gallons, cubefeet;
	cout << "Перевод галлонов в кубические футы. Введите число галлонов: ";
	cin >> gallons;
	cubefeet = gallons/7.481;
	cout << "Результат: " << cubefeet<< endl;
	system("pause");
	return 0;
}

