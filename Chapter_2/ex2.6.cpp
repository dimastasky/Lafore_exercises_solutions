// ex2.6.cpp
// dollars to pounds/franks/markas/jenas converter

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float dollars;

	cout << "Введите количество долларов: ";
	cin >> dollars;
	cout <<setw(10) << dollars << setw(10) << " dollars= " << setw(-15) << dollars * 1.487 << setw(-10) << " pounds"<<endl;
	cout <<setw(10) << dollars << setw(10) << " dollars= " << setw(-15) << dollars * 0.172 << setw(-10) << " franks"<<endl;
	cout <<setw(10) << dollars << setw(10) << " dollars= " << setw(-15) << dollars * 0.584 << setw(-10) << " markas"<<endl;
	cout <<setw(10) << dollars << setw(10) << " dollars= " << setw(-15) << dollars * 0.00955 << setw(-10) << " jenas"<<endl;
    return 0;
}

