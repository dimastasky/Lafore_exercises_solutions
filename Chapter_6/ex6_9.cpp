#include <iostream>

using namespace std;

char ch = '/';
class fraction
{
private:
	int numerator; //числитель
	int denomerator; //знаменатель
public:
	fraction() : numerator(1), denomerator(1)
	{}
	void get_fraction()
	{
		cout << "Enter fraction in x/y format: ";
		cin >> numerator >> ch >> denomerator;
		while (denomerator == 0)
		{
			cout << "Enter again, denomrator must not be equal to 0" << endl <<"Enter x/y";
			cin >> numerator >> ch >> denomerator;
		}
	}
	void fraction_summ(fraction f1, fraction f2)
	{
		denomerator = f1.denomerator * f2.denomerator;
		numerator = (f1.numerator * f2.denomerator) + (f2.numerator * f1.denomerator);
	}
	void display_fraction()
	{
		cout << "\nFraction: " << numerator << ch << denomerator;
	}
};

int main()
{
	fraction fr1, fr2,fr3;
	char yesno = 'a';
	do
	{
	fr1.get_fraction();
	fr2.get_fraction();
	fr1.display_fraction();
	fr2.display_fraction();
	fr3.fraction_summ(fr1, fr2);
	fr3.display_fraction();
	cout << "\nContinue? (y/n): ";
	cin >> yesno;
	} while (yesno != 'n');
	return 0;
}