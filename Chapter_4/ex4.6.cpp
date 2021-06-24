// ex4.6.cpp: определяет точку входа для консольного приложения.
//Должность сотрудника по первой букве

#include "stdafx.h"
#include <iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	setlocale(LC_ALL, "");
	char ch;
	etype profession;
	cout << "Введите первую букву должности: ";
	cin >> ch;
	switch (ch)
	{
	case 'l':
		profession = laborer;
		break;
	case 's':
		profession = secretary;
		break;
	case 'm':
		profession = manager;
		break;
	case 'a':
		profession = accountant;
		break;
	case 'e':
		profession = executive;
		break;
	case 'r':
		profession = researcher;
		break;
	}
	cout << "Полное название должности: ";
	switch (profession)
	{
	case 0: cout << "laborer"; break;
	case 1: cout << "secretary"; break;
	case 2: cout << "manager"; break;
	case 3: cout << "accountant"; break;
	case 4: cout << "executive"; break;
	case 5: cout << "researcher"; break;
	}
	cout << endl;

    return 0;
}

