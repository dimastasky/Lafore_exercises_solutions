// ex2_2.cpp: определяет точку входа для консольного приложения.
//Таблица

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "1990" << setw(10) << "135" << endl
		<< "1991" << setw(10) << "7290" << endl
		<< "1992" << setw(10) << "11300" << endl
		<< "1993" << setw(10) << "16200" << endl;
	system("pause");
    return 0;
}

