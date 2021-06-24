// ex5.4.cpp: определяет точку входа для консольного приложения.
//distance

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Distance 
{
	int feet;
	float inches;
};

Distance addengl(Distance, Distance);
void engldisp(Distance);

int main()
{
	setlocale(LC_ALL, "");
	Distance d1, d2, result;
	char yesno = 'a';
	while (yesno != 'n')
	{
		cout << "d1 Введите число футов: "; cin >> d1.feet;
		cout << "d1 Введите число дюймов: "; cin >> d1.inches;
		cout << "d2 Введите число футов: "; cin >> d2.feet;
		cout << "d2 Введите число дюймов: "; cin >> d2.inches;
		result = addengl(d1, d2);
		engldisp(result);
		cout << endl;
		cout << "Продолжить (y/n)? ";
		cin >> yesno;
	}
    return 0;
}

Distance addengl(Distance dd1, Distance dd2)
{
	float dd1res,dd2res;
	Distance res;
	dd1res = dd1.feet + dd1.inches / 12;
	dd2res = dd2.feet + dd2.inches / 12;
	if (dd1res > dd2res)
		res = dd1;
	else
		res = dd2;
	while (res.inches >= 12.0)
	{
		res.inches -= 12.0;
		res.feet++;
	}
	return res;
}
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
