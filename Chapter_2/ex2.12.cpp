// ex2.12.cpp: определяет точку входа для консольного приложения.
//десятичны фунты в старую систему фунтов, шиллингов и пенсов

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float decpounds; //десятичные фунты
	int pounds, shillings;
	float decfrac; // десятичная дробная часть
	float penses;

	cout << "Введите число десятичных фунтов: ";
	cin >> decpounds;
	
	pounds = static_cast<int>(decpounds); //отбрасывание дробной части
	decfrac = decpounds - pounds; // дробная часть новой системы
	decfrac = decfrac * 20;
	shillings = static_cast<int>(decfrac); //шиллинги
	penses = decfrac - shillings; //дробная часть пенсов
	penses = penses * 12;
	penses = static_cast<int>(penses);
	
	cout << pounds << "." << shillings << "." << penses << " J"<< endl;
    return 0;
}

