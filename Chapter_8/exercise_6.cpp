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
	// конструктор с одним параметром
	// (переводит время, заданное в секундах, в часы, минуты и секунды)
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

	time operator ++();//префиксная форма инкремента
	time operator ++(int);//постфиксная форма инкремента
	time operator --();//префиксная форма декремента
	time operator --(int);//постфиксная форма декремента

	long time_to_secs() const; //перевести время в секунды
	void secs_to_time(long); //перевести секунды в часы/минуты/секунды


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
	long totalsecs; // для хранения времени в секундах
	// переводим заданные значения времени в секунды и складываем
	totalsecs = time_to_secs() + t2.time_to_secs();
	// создаем временный безымянный объект класса time с помощью конструктора с одним параметром,
	// который переводит секунды в часы, минуты и секунды,
	// возвращаем созданный объект в качестве результата сложения
	return time(totalsecs);
}

time time::operator++ ()
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // переводим время в секунды
	ts = ++totalsecs;           // префиксный инкремент
	secs_to_time(ts);    // переводим обратно в часы, минуты и секунды
	return time(ts);            // возвращаем время с прибавленной секундой
}

time time::operator++ (int)
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // переводим время в секунды
	ts = totalsecs++;           // постфиксный инкремент
	secs_to_time(totalsecs);    // переводим обратно в часы, минуты и секунды
	return time(ts);            // возвращаем время без прибавленной секунды
}

// операция префиксного декремента (вычитается 1 секунда)
time time::operator-- ()
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // переводим время в секунды
	ts = --totalsecs;           // префиксный декремент
	secs_to_time(totalsecs);    // переводим обратно в часы, минуты и секунды
	return time(ts);            // возвращаем время с вычитанием секунды
}

// операция постфиксного декремента (вычитается 1 секунда)
time time::operator-- (int)
{
	long totalsecs, ts;
	totalsecs = time_to_secs(); // переводим время в секунды
	ts = totalsecs--;           // постфиксный декремент
	secs_to_time(totalsecs);    // переводим обратно в часы, минуты и секунды
	return time(ts);            // возвращаем время без вычитания секунды
}