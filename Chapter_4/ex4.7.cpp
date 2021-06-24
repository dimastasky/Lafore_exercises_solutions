// ex4.7.cpp: определяет точку входа для консольного приложения.
//Номер, величина зарплаты, дата принятия на работу и должность сотрудника

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };
struct date
{
	int day;
	int mounth;
	int year;
};
struct employee
{
	int id;
	float salary;
	etype profession;
	date dateStart;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	int i=1, v;
	employee human1, human2, human3, humanTemp;
	char ch = '/', pr;
	cout << "Введите id, зарплату, название должности и дату принятия на работу (dd.mm.yyyy)"<<endl;

	while (i != 4)
	{
		cout << "id: ";
		cin >> humanTemp.id;
		cout << "зарплата: ";
		cin >> humanTemp.salary;
		cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, reseacher): ";
		cin >> pr;
		switch (pr)
		{
		case 'l': humanTemp.profession = laborer;    break;
		case 's': humanTemp.profession = secretary;  break;
		case 'm': humanTemp.profession = manager;    break;
		case 'a': humanTemp.profession = accountant; break;
		case 'e': humanTemp.profession = executive;  break;
		case 'r': humanTemp.profession = researcher;  break;
		}
		cout << "Введите дату принятия сотрудника на работу (в формате день/месяц/год): ";
		cin >> humanTemp.dateStart.day >> humanTemp.dateStart.mounth >> humanTemp.dateStart.year;
		if (i == 1) human1 = humanTemp;
		if (i == 2) human2 = humanTemp;
		if (i == 3) human3 = humanTemp;
		i++;
	}

for (v = 1; v <= 3; v++)
{
	if (v == 1) humanTemp = human1;
	if (v == 2) humanTemp = human2;
	if (v == 3) humanTemp = human3;
	cout << "\nНомер сотрудника: " << humanTemp.id << endl;
	cout << "Зарплата сотрудника: " << humanTemp.salary << endl;
	cout << "Должность: ";
	switch (humanTemp.profession)
	{
	case    laborer: cout << "laborer";    break;
	case  secretary: cout << "secretary";  break;
	case    manager: cout << "manager";    break;
	case accountant: cout << "accountant"; break;
	case  executive: cout << "executive";  break;
	case  researcher: cout << "reseacher";  break;
	}
	cout << "\nПринят на работу: " << humanTemp.dateStart.day << ch << humanTemp.dateStart.mounth << ch << humanTemp.dateStart.year << endl;
}


	return 0;
}

