#include <iostream>

using namespace std;

class time
{
private:
	int hours;
	int	minutes;
	int	seconds;
public:
	time() : hours(0), minutes(0), seconds(0)
	{}
	time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
	{}
	void display_time() const
	{
		cout << hours << ":" << minutes << ":" << seconds;
	}
	time operator +(time t2)
	{
		time t3;
		t3.seconds = seconds + t2.seconds;
		if (t3.seconds > 60)
		{
			t3.seconds -= 60;
			t3.minutes++;
		}
		t3.minutes += minutes + t2.minutes;
		if (t3.minutes > 60)
		{
			t3.minutes -= 60;
			t3.hours++;
		}
		t3.hours += hours + t2.hours;
		return t3;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	time time1(5, 59, 59);
	time time2(16, 25, 23);
	time time3;
	time3 = time1 + time2;
	time3.display_time();

	return 0;
}