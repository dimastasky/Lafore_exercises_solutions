// ex4.1.cpp: определяет точку входа для консольного приложения.
//phone numbers

#include "stdafx.h"
#include <iostream>

using namespace std;

struct phone
{
	int cityCode;
	int phoneStation;
	int abonent;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	phone myN, yourN;
	yourN = { 415,555,1212 };
	cout << "Введите код города, номер станции и номер абонента" << endl;
	cin >> myN.cityCode >> myN.phoneStation >> myN.abonent;
	cout << "Мой номер: " << '(' << myN.cityCode << ')' << myN.phoneStation << '-' << myN.abonent << endl;
	cout << "Ваш номер" << "(" << yourN.cityCode << ")" << yourN.phoneStation << "-" << yourN.abonent << endl;
    return 0;
}

