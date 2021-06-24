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
	// ����������� � ����� ����������
	// (��������� �����, �������� � ��������, � ����, ������ � �������)
	time(long s)
	{
		secs_to_time(s);
	}
	void display_time() const
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}

	time operator-(time) const;

	time operator +(time) const;

	time operator *(float f) const
	{
		return time(time_to_secs() * f);
	}

	time operator ++();//���������� ����� ����������
	time operator ++(int);//����������� ����� ����������
	time operator --();//���������� ����� ����������
	time operator --(int);//����������� ����� ����������

	long time_to_secs() const; //��������� ����� � �������
	void secs_to_time(long); //��������� ������� � ����/������/�������


};

int main()
{
	setlocale(LC_ALL, "");
	time time1(5, 59, 59);
	time time2(16, 25, 23);
	time time3;
	++time1;
	time1.display_time();


	time3 = time1 + time2;
	time3.display_time();

	time3 = time2 - time1;
	time3.display_time();

	time3 = time1 * 2;
	time3.display_time();

	return 0;
}

long time::time_to_secs() const
{
	return(hours * 3600 + minutes * 60 + seconds);
}

void time::secs_to_time(long s)
{
	hours = s / 3600;
	minutes = (s % 3600) / 60;
	seconds = (s % 3600) % 60;
}

time time::operator-(time t2)const
{
	return(time_to_secs()-t2.time_to_secs());
}

time time::operator+(time t2) const
{
	long totalsecs; // ��� �������� ������� � ��������
	// ��������� �������� �������� ������� � ������� � ����������
	totalsecs = time_to_secs() + t2.time_to_secs();
	// ������� ��������� ���������� ������ ������ time � ������� ������������ � ����� ����������,
	// ������� ��������� ������� � ����, ������ � �������,
	// ���������� ��������� ������ � �������� ���������� ��������
	return time(totalsecs);
}

time time::operator++ ()
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // ��������� ����� � �������
	ts = ++totalsecs;           // ���������� ���������
	secs_to_time(ts);    // ��������� ������� � ����, ������ � �������
	return time(ts);            // ���������� ����� � ������������ ��������
}

time time::operator++ (int)
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // ��������� ����� � �������
	ts = totalsecs++;           // ����������� ���������
	secs_to_time(totalsecs);    // ��������� ������� � ����, ������ � �������
	return time(ts);            // ���������� ����� ��� ������������ �������
}

// �������� ����������� ���������� (���������� 1 �������)
time time::operator-- ()
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // ��������� ����� � �������
	ts = --totalsecs;           // ���������� ���������
	secs_to_time(totalsecs);    // ��������� ������� � ����, ������ � �������
	return time(ts);            // ���������� ����� � ���������� �������
}

// �������� ������������ ���������� (���������� 1 �������)
time time::operator-- (int)
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // ��������� ����� � �������
	ts = totalsecs--;           // ����������� ���������
	secs_to_time(totalsecs);    // ��������� ������� � ����, ������ � �������
	return time(ts);            // ���������� ����� ��� ��������� �������
}