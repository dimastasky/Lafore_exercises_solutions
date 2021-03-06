// ex5.5.cpp: определяет точку входа для консольного приложения.
//часы минуты и секунды - в секунды

#include "stdafx.h"
#include <iostream>
using namespace std;

long hms_to_secs(int, int, int);

int main()
{
	setlocale(LC_ALL, "");
	char yesno = 'a', ch = '/';
	int h, m, s;
	long res;
	while (yesno != 'n')
	{
		cout << "Введите часы, минуты и секунды: ";
		cin >> h >> m >> s;
		res = hms_to_secs(h, m, s);
		cout << "Время в секундах = " << res<<endl;
		cout << "Продолжить (y/n)? ";
		cin >> yesno;
	}
    return 0;
}

long hms_to_secs(int hours, int minutes, int seconds)
{
	long result;
	result = hours * 3600 + minutes * 60 + seconds;
	return result;
}