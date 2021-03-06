// ex5.11.cpp: определяет точку входа для консольного приложения.
//sterling

#include "stdafx.h"
#include <iostream>
using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int penses;
};

sterling st();
sterling st(sterling, sterling);
void st(sterling);

int main()
{
	setlocale(LC_ALL, "");
	sterling val1, val2, val3;
	val1 = st();
	val2 = st();
	val3 = st(val1, val2);
	st(val3);
    return 0;
}
sterling st()
{
	sterling s;
	cout << "Введите число фунтов: ";
	cin >> s.pounds;
	cout << "Введите число шиллингов: ";
	cin >> s.shillings;
	cout << "Введите число пенсов: ";
	cin >> s.penses;
	return s;
}
sterling st(sterling s1, sterling s2)
{
	sterling s3;
	s3.shillings = 0;
	s3.pounds = 0;
	s3.penses = s1.penses + s2.penses;
	while (s3.penses > 12)
	{
		s3.penses -= 12;
		s3.shillings++;
	}
	s3.shillings += s1.shillings + s2.shillings;
	while (s3.shillings > 20)
	{
		s3.shillings -= 20;
		s3.pounds++;
	}
	s3.pounds += s1.pounds + s2.pounds;
	return s3;
}
void st(sterling sum)
{
	cout << "Сумма = " << sum.pounds << " J " << sum.shillings << " SH " << sum.penses << " penses "<<endl;
}