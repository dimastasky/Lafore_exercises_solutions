#include <iostream>

using namespace std;

char ch = '/';

class date
{
private:
	int month;
	int day;
	int year;
public:
	date(): month(0),day(0),year(0)
	{}

	void getdate()
	{
		cout << "Enter data in format \"XX/XX/XXXX\": ";
		cin >> day >> ch >> month >> ch >> year;
	}
	void showdate() const
	{
		cout << day << ch << month << ch << year;
	}
};

int main()
{
	date date1;
	date1.getdate();
	date1.showdate();
	return 0;
}