// ex4.11.cpp: определяет точку входа для консольного приложения.
//hard time

#include "stdafx.h"
#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	time ti1, ti2, tiSum;
	unsigned long totalsecs1, totalsecs2, totalsecsSum;
	char ch = ':', yesno = 'a';
	while (yesno != 'n')
	{
		cout << "Введите время 1 в формате(hh:mm:ss): ";
		cin >> ti1.hours >> ti1.minutes >> ti1.seconds;
		cout << "Введите время 2 в формате(hh:mm:ss): ";
		cin >> ti2.hours >> ti2.minutes >> ti2.seconds;

		totalsecs1 = ti1.hours * 3600 + ti1.minutes * 60 + ti1.seconds;
		totalsecs2 = ti2.hours * 3600 + ti2.minutes * 60 + ti2.seconds;
		totalsecsSum = totalsecs1 + totalsecs2;
		cout << "сек.1 = " << totalsecs1 << " sec.2 = " << totalsecs2 << "secSum = " << totalsecsSum<<endl;
		tiSum.hours = totalsecsSum / 3600;
		tiSum.minutes = (totalsecsSum- tiSum.hours * 3600 )/ 60;
		tiSum.seconds = totalsecsSum - tiSum.hours * 3600 - tiSum.minutes * 60;
		cout << "Итог: " << tiSum.hours << ch << tiSum.minutes << ch << tiSum.seconds<<endl;

		cout << "Продолжить (y/n)? ";
		cin >> yesno;
	}

    return 0;
}

