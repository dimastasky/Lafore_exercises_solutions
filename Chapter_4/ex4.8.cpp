 // ex4.8.cpp: определяет точку входа для консольного приложения.
//две дроби

#include "stdafx.h"
#include <iostream>
using namespace std;

struct fraction
{
	int chislitel;
	int znamenatel;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	fraction ab, cd,result;
	char ch,wh = 'a';
	while (wh != 'n')
	{
		cout << "Введите первую дробь: ";
		cin >> ab.chislitel >> ch >> ab.znamenatel;
		cout << "Введите вторую дробь: ";
		cin >> cd.chislitel >> ch >> cd.znamenatel;
		result.chislitel = ab.chislitel*cd.znamenatel + ab.znamenatel*cd.chislitel;
		result.znamenatel = ab.znamenatel*cd.znamenatel;
		cout << result.chislitel << ch << result.znamenatel << endl;
		cout << "Продолжить (y/n): ";
		cin >> wh;
	}
    return 0;
}

