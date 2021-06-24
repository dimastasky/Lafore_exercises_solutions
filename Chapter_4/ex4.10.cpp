// ex4.10.cpp: определяет точку входа для консольного приложения.
//денежные суммы из новой английской системы в старую

#include "stdafx.h"
#include <iostream>
using namespace std;

struct sterling
{
	int oldPounds;
	int oldShillings;
	int oldPenses;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	sterling st1;
	char ch = '.', yesno = 'a';
	double newPounds;
	while (yesno != 'n')
	{
		cout << "Введите количество Фунтов и Пенсов в новой системе: " << endl;
		cin >> newPounds;
		st1.oldPounds = newPounds;
		st1.oldShillings = (newPounds - st1.oldPounds) * 20;
		st1.oldPenses = (((newPounds - st1.oldPounds) * 20) - st1.oldShillings) * 12;
		cout << newPounds << " Ф. в новой системе = " << st1.oldPounds << ch << st1.oldShillings << ch << st1.oldPenses << " фунтов, шиллингов и пенсов" << endl;
		cout << "Продолжить (y/n)? ";
		cin >> yesno;
	}
    return 0;
}

