// ex4.9.cpp: определяет точку входа для консольного приложения.
//Перевод часов и минут в секунды

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
	time t1;
	unsigned long totalSecs;
	char wh = 'a';
	while (wh != 'n')
	{
		cout << "\nВведите часы, минуты и секунды: ";
		cin >> t1.hours >> t1.minutes >> t1.seconds;
		totalSecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
		cout << "В " << t1.hours << " часах, " << t1.minutes << " минутах, " << t1.seconds << " секундах: " << totalSecs << " секунд";
		cout << "\n Продолжить (y/n): ";
		cin >> wh;
	}
    return 0;
}

