// ex4.4.cpp: определяет точку входа для консольного приложения.
//сотрудники и их зарплата

#include "stdafx.h"
#include <iostream>
using namespace std;

struct employee
{
	int id;
	float sallary;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	employee human1, human2, human3;
	cout << "Введите id и зарплату сотрудника 1: ";
	cin >> human1.id >> human1.sallary;
	cout << "Введите id и зарплату сотрудника 2: ";
	cin >> human2.id >> human2.sallary;
	cout << "Введите id и зарплату сотрудника 3: ";
	cin >> human3.id >> human3.sallary;
	cout << "Сотрудник 1 id: " << human1.id << " Зарплата: " << human1.sallary << " $$$" << endl;
	cout << "Сотрудник 2 id: " << human2.id << " Зарплата: " << human2.sallary << " $$$" << endl;
	cout << "Сотрудник 3 id: " << human3.id << " Зарплата: " << human3.sallary << " $$$" << endl;
	return 0;
}

