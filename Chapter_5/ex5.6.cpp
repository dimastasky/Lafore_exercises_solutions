// ex5.6.cpp: определяет точку входа для консольного приложения.
//time to secs, secs to time

#include "stdafx.h"
#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};
long time_to_secs(time);
time secs_to_time(long);


int main()
{
	setlocale(LC_ALL, "");
	time t1, resTime;
	long secs, resSecs;
	char yesno = 'a';

	while (yesno != 'n')
	{
		cout << "1) Введите часы, минуты, секунды: ";
		cin >> t1.hours >> t1.minutes >> t1.seconds;
		resSecs = time_to_secs(t1);
		cout << "Количество секунд = " << resSecs << endl;
		cout << "2) Введите к-во секунд: ";
		cin >> secs;
		resTime = secs_to_time(secs);
		cout << "H= " << resTime.hours << " M= " << resTime.minutes << " S= " << resTime.seconds<<endl;
		cout << "Продолжить (y/n)? ";
		cin >> yesno;
	}
    return 0;
}
long time_to_secs(time tt)
{
	long result;
	result = tt.hours * 3600 + tt.minutes * 60 + tt.seconds;
	return result;
}
time secs_to_time(long ss)
{
	time result;
	result.hours = ss / 3600;
	result.minutes = (ss - result.hours * 3600) / 60;
	result.seconds = ss - result.hours * 3600 - result.minutes * 60;
	return result;
}
