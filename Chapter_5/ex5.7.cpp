// ex5.7.cpp: определяет точку входа для консольного приложения.
//перегруженная функция power

#include "stdafx.h"
#include <iostream>
using namespace std;

void power(char, int);
int power(int, int);
long power(long, int);
float power(float, int);

int main()
{
	char ch = '*';
	int integer = 2;
	long lg = 4;
	float pi = 3.14;
	setlocale(LC_ALL, "");
	cout << "100 символов * на экране";
	power(ch, 100);
	cout << "\ninteger: "<<power(integer, 10);
	cout << "\nlong: "<<power(lg, 10);
	cout << "\nfloat pi: "<<power(pi, 5)<<endl;
    return 0;
}
void power(char n, int p)
{
	for (int i = 1; i <= p; i++)
		cout << n;
	cout << endl;
}
int power(int n, int p)
{
	int jj = 1;
	for (int i = 1; i <= p; i++)
		jj *= n;
	return jj;
}
long power(long n, int p)
{
	long jj = 1;
	for (int i = 1; i <= p; i++)
		jj *= n;
	return jj;
}
float power(float n, int p)
{
	float jj = 1;
	for (int i = 1; i <= p; i++)
		jj *= n;
	return jj;
}