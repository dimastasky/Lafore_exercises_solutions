// ex5.1.cpp: определяет точку входа для консольного приложения.
//Вычисляет площадь круга

#include "stdafx.h"
#include <iostream>
using namespace std;

float circarea(float rad)
{
	float area = 3.14*rad*rad;
	return area;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float radius;
	cout << "Введите прадиус круга: ";
	cin >> radius;
	cout << "Площадь круга = " << circarea(radius) << endl;
    return 0;
}

