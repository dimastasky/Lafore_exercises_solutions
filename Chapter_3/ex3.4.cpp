// ex3.4.cpp: определяет точку входа для консольного приложения.
//calculator swwitch

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double oper1, oper2, ans;
	char znak,ch;
	do
	{
		cout << "Введите первый операнд, операцию, второй операнд: ";
		cin >> oper1 >> znak >> oper2;
		switch (znak)
		{
		case '+':
		ans = oper1 + oper2;
		break;
		case '-':
			ans = oper1 - oper2;
			break;
		case '*':
			ans = oper1 * oper2;
			break;
		case '/':
			ans = oper1 / oper2;
			break;
		}
		cout << "\nОтвет: " << ans << endl;
		cout << "Выполнит еще одну операцию (y/n)? ";
		cin >> ch;
	} while (ch != 'n');

    return 0;
}

