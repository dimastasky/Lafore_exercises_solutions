// ex3.6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int numb;
	unsigned long fact = 1;
	do 
	{
		cout << "Введите целое число: ";
		cin >> numb;
		for (int j = numb; j > 0; j--)
			fact *= j;
		cout << "Факториал от " << numb << " = " << fact << endl;
		fact = 1;
	} while (numb != 0);
    return 0;
}

