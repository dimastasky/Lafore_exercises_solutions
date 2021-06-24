#include "stdafx.h"
#include <iostream>
using namespace std;

struct fraction
{
	int chislitel;
	int znamenatel;
};

void fadd(fraction, fraction);
void fsub(fraction, fraction);
void fmul(fraction, fraction);
void fdiv(fraction, fraction);

int main()
{
	setlocale(LC_ALL, "Russian");
	char yesno = 'a', znak,ch;
	fraction n1, n2, result;

	while (yesno != 'n')
	{
		cout << "Введите первую дробь: ";
		cin >> n1.chislitel >> ch >> n1.znamenatel;
		cout << "Введите операцию: "; cin >> znak;
		cout << "Введите вторую дробь: ";
		cin >> n2.chislitel >> ch >> n2.znamenatel;
		switch (znak)
		{
		case '+':
			fadd(n1, n2);
			break;
		case '-':
			fsub(n1, n2);
			break;
		case '*':
			fmul(n1, n2);
			break;
		case '/':
			fdiv(n1, n2);
			break;
		}
		
		cout << "Продолжить (y/n)? ";
		cin >> yesno;
	}

	return 0;
}
void fadd(fraction ab, fraction cd)
{
	char ch = '/';
	fraction result;
	result.chislitel = ab.chislitel*cd.znamenatel + ab.znamenatel*cd.chislitel;
	result.znamenatel = ab.znamenatel*cd.znamenatel;
	cout << "Результат: " << result.chislitel << ch << result.znamenatel << endl;
}
void fsub(fraction ab, fraction cd)
{
	char ch = '/';
	fraction result;
	result.chislitel = ab.chislitel*cd.znamenatel - ab.znamenatel*cd.chislitel;
	result.znamenatel = ab.znamenatel*cd.znamenatel;;
	cout << "Результат: " << result.chislitel << ch << result.znamenatel << endl;
}
void fmul(fraction ab, fraction cd)
{
	char ch = '/';
	fraction result;
	result.chislitel = ab.chislitel*cd.chislitel;
	result.znamenatel = ab.znamenatel*cd.znamenatel;
	cout << "Результат: " << result.chislitel << ch << result.znamenatel << endl;
}
void fdiv(fraction ab, fraction cd)
{
	char ch = '/';
	fraction result;
	result.chislitel = ab.chislitel*cd.znamenatel;
	result.znamenatel = ab.znamenatel*cd.chislitel;
	cout << "Результат: " << result.chislitel << ch << result.znamenatel << endl;
}