// ex4.2.cpp: определяет точку входа для консольного приложения.
//точки на плоскости

#include "stdafx.h"
#include <iostream>
using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	point p1, p2, pSum;
	cout << "Введите координаты первой точки: ";
	cin >> p1.x >> p1.y;
	cout << "Введите координаты второй точки: ";
	cin >> p2.x >> p2.y;
	pSum.x = p1.x + p2.x;
	pSum.y = p1.y + p2.y;
	cout << "Координаты точки p1+p2 равны: " << pSum.x << "," << pSum.y << endl;
    return 0;
}

