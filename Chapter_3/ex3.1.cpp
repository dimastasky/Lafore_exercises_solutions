// ex3.1
//Таблица умножения на заданное число

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	unsigned long a,b,c,hstr,wstr;
	cout << "Введите число для умножения: ";
	cin >> a;
	
	for (hstr = 0; hstr < 100; hstr++)
	{
		b = a * 10 * hstr;
		for (wstr = 1; wstr <= 10; wstr++)
		{

			c = a * wstr + b;
			cout << setw(10) << c << " ";
		}
		cout << endl;
	}
    return 0;
}

