// ex5.3.cpp: определяет точку входа для консольного приложения.
//присваивание меньшему аргументу нулевое значение

#include "stdafx.h"
#include <iostream>
using namespace std;

void zeroSmaller(int&, int&);

int main()
{
	setlocale(LC_ALL, "");
	int n1, n2;
	char yesno = 'a';
	while (yesno != 'n')
	{
		cout << "Введите число 1: "; cin >> n1;
		cout << "Введите число 2: "; cin >> n2;
		zeroSmaller(n1, n2);
		cout << "n1 = " << n1<<endl;
		cout << "n2 = " << n2 << endl;
		cout << "Продолжить (y/n)?"; cin >> yesno;
	}
    return 0;
}

void zeroSmaller(int& numb1, int& numb2)
{
	if (numb1 > numb2)
		numb2 = 0;
	else
		numb1 = 0;
}
