// ex5.9.cpp: определяет точку входа для консольного приложения.
//обмен значений типа time

#include "stdafx.h"
#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

void swap(time&, time&);

int main()
{
	setlocale(LC_ALL, "");
	time t1, t2;
	char ch = ':';
	cout << "Введите время 1 (ЧЧ ММ СС): ";
	cin >> t1.hours >> t1.minutes >> t1.seconds;
	cout << "Введите время 2 (ЧЧ ММ СС): ";
	cin >> t2.hours >> t2.minutes >> t2.seconds;
	cout << "Время 1 и время 2 поменялись местами";
	swap(t1, t2);
	cout << "\nВремя 1: " << t1.hours<<ch<<t1.minutes<<ch<<t1.seconds;
	cout << "\nВремя 2: " << t2.hours<<ch<<t2.minutes<<ch<<t2.seconds<<endl;
    return 0;
}
void swap(time& time1, time& time2)
{
	time temp;
	temp.hours = time1.hours; time1.hours = time2.hours; time2.hours = temp.hours;
	temp.minutes = time1.minutes; time1.minutes = time2.minutes; time2.minutes = temp.minutes;
	temp.seconds = time1.seconds; time1.seconds = time2.seconds; time2.seconds = temp.seconds;
}
