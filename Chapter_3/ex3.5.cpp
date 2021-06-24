// ex3.5.cpp: определяет точку входа для консольного приложения.
//Пирамида из x

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите высоту пирамиды: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 1 + i * 2; //число символов X
		int y = i + (n - x); //число "_"
		for (int j = 0; j < x + y; j++)
		{
			if (j < y)//j < числа пробелов
				cout << " ";
			else
				cout << "X";
		}
		cout << endl;
	}

    return 0;
}

