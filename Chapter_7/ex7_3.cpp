#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(): feet(0), inches(0)
	{}
	Distance(int ft, float inch): feet(ft), inches(inch)
	{}
	void get_dist();
	void div_dist(Distance, int);
	void add_dist(Distance, Distance);
	void show_dist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};


void Distance::get_dist()
	{
		cout << "Enter feet: ";
		cin >> feet;
		cout << "Enter inches: ";
		cin >> inches;
	}

void Distance::add_dist(Distance d1, Distance d2)
{
	inches += d1.inches + d2.inches;
	feet = 0;
	while (inches >= 12)
	{
		inches -= 12;
		feet++;
	}
	feet += d1.feet + d2.feet;
}

void Distance::div_dist(Distance dist, int divisor)
{
	float fltfeet = dist.feet + dist.inches / 12.0;
	fltfeet /= divisor;
	feet = int(fltfeet);
	inches = (fltfeet - feet) * 12.0;
}

int main()
{
	setlocale(LC_ALL, "");

	const int MAX = 100;
	char yesno;
	int count = 0;

	Distance total(0, 0.0), average;
	Distance interval[MAX];

	cout << "Вычисление среднего значения введенных расстояний.\n";

	do
	{
		interval[count++].get_dist();
		cout << "Continue (y/n)?";
		cin >> yesno;
	} while (yesno != 'n' && count < MAX);

	for (int j = 0; j < count; j++)
	{
		total.add_dist(total, interval[j]);
	}

	cout << "Total: \n";
	total.show_dist();
	cout << endl;

	average.div_dist(total, count);
	cout << "Average: \n";
	average.show_dist();

	return 0;
}