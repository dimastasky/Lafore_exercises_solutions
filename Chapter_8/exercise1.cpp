// CHAPTER_8 EXERCISE_1
// engplus.cpp
// перегрузка операции + для сложения переменных типа Distances
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance  // класс английских мер длины
{
private:
	int feet;
	float inches;
public:
	// конструктор без параметров
	Distance() : feet(0), inches(0.0)
	{ }
	// конструктор с двумя параметрами
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// получение информации от пользователя
	void getdist()
	{
		cout << "\nВведите футы: "; cin >> feet;
		cout << "Введите дюймы: ";  cin >> inches;
	}
	// показ информации
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	// сложение двух длин
	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;
};
///////////////////////////////////////////////////////////
// сложение двух длин
Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;       // складываем футы
	float i = inches + d2.inches; // складываем дюймы
	if (i >= 12.0)              // если дюймов стало больше 12
	{
		i -= 12.0;                  // то уменьшаем дюймы на 12
		f++;                        // и увеличиваем футы на 1
	}
	return Distance(f, i);     // создаем и возвращаем временную переменную
}

// Вычитание двух величин
Distance Distance::operator- (Distance d2) const
{
	int f = feet - d2.feet;
	
	float i = inches - d2.inches;
	if (i < 0 && f > 0)//Если количество дюймов меньше 0 и количество футов - положительное число
	{
		i += 12.0;
		f--;
	}
	if (f<=0 && i<0)
	{
		cout << "Вы вычитаете больший интервал из меньшего!" << endl;
		exit(1);
	}
	return Distance(f, i);
}
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "");

	Distance dist1, dist3, dist4;  // определяем переменные
	dist1.getdist();             // получаем информацию

	Distance dist2(11, 6.25);   // определяем переменную с конкретным значением

	//Объект с левой стороны(dist1) - вызывает функцию оператора
	//Объект с правой стороны(dist2) - передается в функцию(operator+) в качестве аргумента
	//Значение возвращается dist3
	//К левому операнду мы имеем прямой доступ, используя feet и inches
	//К правому операнду мы имеем доступ как к аргументу функции, т.е. как d2.feet d2.inches
	//Перегруженной операции всегда требуется кол-во аргументов на один меньшее, чем к-во операндов
	//т.к один из операндов является объектом, вызывающим функцию

	dist3 = dist1 - dist2;         // складываем две переменные

	//dist4 = dist1 - dist2 - dist3; // складываем несколько переменных

	// показываем, что же у нас получилось
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl;
	cout << "dist4 = "; dist4.showdist(); cout << endl;

	return 0;
}