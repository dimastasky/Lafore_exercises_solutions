// ex2.3.cpp
//арифметическое присваивание и декремент

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int var = 10;
	cout << var << endl;
	var += 10;
	cout << var-- << endl;
	cout << var << endl;
	
	system("pause");
    return 0;
}

