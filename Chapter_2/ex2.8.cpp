// ex2.8.cpp: определяет точку входа для консольного приложения.
//setfill() with setw()

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	long pop1 = 119200000, pop2 = 47, pop3 = 9761;
	cout << setfill('.') << setw(10) << "Город " << setfill('.') << setw(12)
		<< "Население" << endl
		<< setfill('.') << setw(9) << "Москва" << setfill('.') << setw(12) << pop1 << endl
		<< setfill('.') << setw(9) << "Киров" << setfill('.') << setw(12) << pop2 << endl
		<< setfill('.') << setw(9) << "Угрюмовка" << setfill('.') << setw(12) << pop3 << endl;

    return 0;
}

