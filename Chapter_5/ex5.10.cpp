// ex5.10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void func(int n)
{
	static int t = 1;
	cout << "Функция выводилась " << t << " раз"<<endl;
	t++;
}

int main()
{
	setlocale(LC_ALL, "");
	int p;
	cout << "Введите число раз для вывода функции: ";
	cin >>p;
	for (int i = 0; i < p; i++)
		func(p);
    return 0;
}

