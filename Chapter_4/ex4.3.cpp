// ex4.3.cpp: определяет точку входа для консольного приложения.
//Площадь помещения

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	float inches;
};
struct Volume
{
	Distance length;
	Distance witdth;
	Distance heigth;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	float l, w, h;
	Volume room1{ {18,16.2},{25,17.5},{11,47.6} };
	l = room1.length.feet + room1.length.inches / 12.0;
	w = room1.witdth.feet + room1.witdth.inches / 12.0;
	h = room1.heigth.feet + room1.heigth.inches / 12.0;
	cout << "Объем комнаты равен: " << l * w * h <<" кубических футов"<< endl;;
    return 0;
}

