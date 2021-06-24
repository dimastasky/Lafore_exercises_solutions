#include <iostream>
#include <cstring>
#include <windows.h>


using namespace std;

const int MAX = 100;

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	void reversit(char[]);
	char str[MAX];

	cout << "Введите строку: ";
	cin.get(str, MAX);
	reversit(str);
	cout << "Перевернутая строка: " << str << endl;

	return 0;
}

void reversit(char s[])
{
	int len = strlen(s);
	for (int j = 0; j < len / 2; j++)
	{
		char temp = s[j];
		s[j] = s[len - j - 1];
		s[len-j-1] = temp;
	}
}
