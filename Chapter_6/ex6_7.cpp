#include <iostream>
#include <iomanip>

using namespace std;

class angle
{
private:
	int degree;
	float minute;
	char direction;
public:
	angle() : degree(0), minute(0), direction('N')
	{}
	angle(int deg, float m, char dir) : degree(deg), minute(m), direction(dir)
	{}
	void add_coord();
	void display_coord() const;
};

void angle::add_coord()
{
	cout << "Enter degree: "; cin >> degree;
	cout << "Enter minute: "; cin >> minute;
	cout << "Enter direction (N, S, E or W): ";
	cin >> direction;
	while (direction != 'N' && direction != 'S' && direction != 'E' && direction != 'W')
	{
		cout << "Wrong direction record, input again (N, S, E or W): ";
		cin >> direction;
	}
}

void angle::display_coord() const
{
	cout << "Your coord: " << degree << '\xF8' << minute << "\' " << direction << endl << endl;
}

int main()
{
	angle a1;
	angle location(55, 65.1, 'E');
	cout << "Coord entering" << endl;

	location.display_coord();

	char yesno = 'a';
	do
	{
		a1.add_coord();
		a1.display_coord();
		cout << endl << "Continue (y/n)? "; cin >> yesno;
	} while (yesno != 'n');

	return 0;
}