// ex3.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "conio.h"
int main()
{
	setlocale(0, "Rus");
	long x = 0;
	char get = 'a';
	char _getche();
	cout << "Введите число: ";

	while ((get=_getche() )!= '\r');
	{
		x = x * 10 + get - '0';
	} 
	cout << "Вы ввели число: " << x << endl;
	//system("pause");
	return 0;
}