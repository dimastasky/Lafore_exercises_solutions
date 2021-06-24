//Калькулятор для дробей

#include <iostream>
#include <cmath>
using namespace std;

class fraction
{
private:
	int numerator;
	int denominator;
public:
	fraction() 
		{ };
	fraction(int n, int d) : numerator(n), denominator(d)
		{ };

	void getFraction()
	{
		char ch;
		cin >> numerator >> ch >> denominator;
	}
	void showFraction() const
	{
		cout << endl << "Result: " << numerator << "/" << denominator;
	}
	void lowterms(); //приводит дробь к несократимому виду

	fraction operator+ (fraction);
	fraction operator- (fraction);
	fraction operator* (fraction);
	fraction operator/ (fraction);

	// перегрузка операции сравнения «равно» (==) для обыкновенных дробей
	bool operator== (fraction f) const
	{
		if ((numerator == f.numerator) && (denominator == f.denominator))
			return true;
		else
			return false;
	}
	// перегрузка операции сравнения «не равно» (!=) для обыкновенных дробей
	bool operator!= (fraction f) const
	{
		if ((numerator == f.numerator) && (denominator == f.denominator))
			return false;
		else
			return true;
	}

};

fraction fraction::operator+(fraction fr2) // сложение дробей
{
	int nr = numerator * fr2.denominator + denominator * fr2.numerator; //вычисление числителя
	int dr = denominator * fr2.denominator; //вычисление знаменателя
	fraction res(nr,dr);
	res.lowterms();
	return res;
}

fraction fraction::operator-(fraction fr2)
{
	int nr = numerator * fr2.denominator - denominator * fr2.numerator; //вычисление числителя
	int dr = denominator * fr2.denominator; //вычисление знаменателя
	fraction res(nr, dr);
	res.lowterms();
	return res;
}

fraction fraction::operator*(fraction fr2)
{
	int nr = numerator * fr2.numerator; //вычисление числителя
	int dr = denominator * fr2.denominator; //вычисление знаменателя
	fraction res(nr, dr);
	res.lowterms();
	return res;
}

fraction fraction::operator/(fraction fr2)
{
	int nr = numerator * fr2.denominator;
	int dr = denominator * fr2.numerator;
	fraction res(nr, dr);
	res.lowterms();
	return res;
}

// метод для сокращения дроби до несократимого вида
// (возвращение преобразованной дроби добавлено, чтобы можно было использовать
// этот метод в перегруженных операциях сложения, вычитания, умножения и деления)
void fraction::lowterms()
{
	long tnum, tden,
		temp,
		gcd; // наибольший общий делитель, который нужно найти (greatest common divisor)
	tnum = labs(numerator);
	tden = labs(denominator);
	if (tden == 0)
	{
		cout << "\nНедопустимый знаменатель!";
	}
	else if (tnum == 0) 
	{
		numerator = 0;
		denominator = 1;
		return;
	}

	while (tnum != 0)
	{
		if (tnum < tden)
		{
			temp = tnum; tnum = tden; tden = temp;
		}
		tnum = tnum - tden;
	}
	gcd = tden;
	numerator = numerator / gcd;
	denominator = denominator / gcd;
}

int main()
{
	setlocale(LC_ALL, "");
	fraction fr1, fr2, result;
	fraction fr(0, 1);
	char yesno = 'a', sw;
	do
	{
		cout << "\nВведите дробь (a/b): ";
		fr1.getFraction();
		cout << "\nВыберите операцию (+,-,*,/): "; cin >> sw;
		cout << "\nВведите дробь (c/d): ";
		fr2.getFraction();

		// если пользователь ввел в качестве и первой, и второй дроби дробь 0/1
		if ((fr1 == fr) && (fr2 == fr))
			break; // то выйти из цикла

		switch (sw)
		{
		case '+':
			result = fr1 + fr2;
			result.showFraction();
			break;
		case '-':
			result = fr1 - fr2;
			result.showFraction();
			break;
		case '*':
			result = fr1 * fr2;
			result.showFraction();
			break;
		case '/':
			result = fr1 / fr2;
			result.showFraction();
			break;
		default:
			cout << "\nПовторите ввод знака.";
			break;
		}
		cout << "\nПовторить (y/n)? "; cin >> yesno;
	} while (yesno != 'n');
	return 0;
}