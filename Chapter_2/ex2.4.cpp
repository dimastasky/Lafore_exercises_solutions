// ex2.4.cpp
//Вывод стихотворения А.Дементьева "Ни о чем не жалейте"

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << setw(25) << "НИ О ЧЕМ НЕ ЖАЛЕЙТЕ\n";
	cout << setw(-50) << "Никогда ни о чем не жалейте вдогонку,\n";
	cout << setw(-50) << "Если то, что случилось, нельзя изменить.\n";
	cout << setw(-50) << "Как записку из прошлого, грусть свою скомкав,\n";
	cout << setw(-50) << "С этим прошлым порвите непрочную нить.\n\n";
	cout << setw(-50) << "Никогда не жалейте о том, что случилось.\n";
	cout << setw(-50) << "Иль о том, что случиться не может уже.\n";
	cout << setw(-50) << "Лишь бы озеро вашей души не мутилось,\n";
	cout << setw(-50) << "Да надежды, как птицы, парили в душе.\n\n";
	cout << setw(-50) << "Не жалейте своей доброты и участья,\n";
	cout << setw(-50) << "Если даже за всё вам - усмешка в ответ.\n";
	cout << setw(-50) << "Кто-то в гении выбился, кто-то в начальство...\n";
	cout << setw(-50) << "Не жалейте, что вам не досталось их бед\n\n";
	cout << setw(-50) << "Никогда, никогда ни о чем не жалейте -\n";
	cout << setw(-50) << "Поздно начали вы или рано ушли.\n";
	cout << setw(-50) << "Кто-то пусть гениально играет на флейте,\n";
	cout << setw(-50) << "Но ведь песни берет он из Вашей души.\n\n";
	cout << setw(-50) << "Никогда, никогда ни о чем не жалейте -\n";
	cout << setw(-50) << "Ни потерянных дней, ни сгоревшей любви.\n";
	cout << setw(-50) << "Пусть другой гениально играет на флейте,\n";
	cout << setw(-50) << "Но еще гениальнее слушали вы.\n\n" << endl;
    return 0;
}

