// ex3.2.cpp: определяет точку входа для консольного приложения.
//Из шкалы Цельсия в Фаренгейт и обратно

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	float c, f;
	cout << "Нажмите 1 для перевода из шкалы Цельсия в шкалу Фаренгейта,"
		<< "\n 2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout << "\n Введите температуру по Цельсию: ";
		cin >> c;
		cout << c << " Цельсий = " << c * 1.8 + 32 << " Фаренгейт"<<endl;
		break;
	case 2:
		cout << "\n Введите температуру по Фаренгейту: ";
		cin >> f;
		cout << f << " Фаренгейт = " << f / 1.8 - 32 << " Цельсий"<<endl;
		break;
	default:
		cout << "Ошибка"<<endl;
		break;
	}
    return 0;
}

