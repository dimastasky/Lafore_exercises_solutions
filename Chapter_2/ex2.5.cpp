// ex2.5.cpp
//Строчная, не строчная буква

#include "stdafx.h"
#include <iostream>
#include <ctype.h> //islower()
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	cout << islower(letter);
	
	system("pause");
    return 0;
}

