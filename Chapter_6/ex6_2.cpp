#include <iostream>
#include <conio.h>

using namespace std;

class tollBooth
{
private:
	unsigned int dr_through;
	double paid_summ;
public:
	tollBooth() : dr_through(0), paid_summ(0) 
	{}
	void payingCar()
	{
		dr_through++;
		paid_summ += 0.5;
	}
	void nopayCar()
	{
		dr_through++;
	}
	const void display()
	{
		cout << "\nDrive through: " << dr_through << endl << "Paid money = " << paid_summ << " $" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	tollBooth t1;
	char ch;
	cout << "Введите 0 если проезд не был оплачен, 1 если был, ESC для завершения работы. " << endl;
	do
	{
		ch = _getche();
		if (ch == '0')
			t1.nopayCar();
		if (ch == '1')
			t1.payingCar();
	} while (ch != '\r');
	t1.display();

	return 0;
}