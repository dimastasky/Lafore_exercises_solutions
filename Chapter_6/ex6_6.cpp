#include <iostream>
#include <iomanip>

using namespace std;

char ch = '/';

class date
{
private:
	int month;
	int day;
	int year;
public:
	date() : month(0), day(0), year(0)
	{}
	date(int m, int d, int y): month(m), day(d), year(y)
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

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class employee
{
private:
	int id_emp;
	float salary;
	date date_emp;
	etype emp_pos;
public:
	employee() : id_emp(0), salary(0)
	{}
	employee(int a, float b) : id_emp(a), salary(b)
	{}
	void add_employee()
	{
		char letter;
		date_emp.getdate();
		cout << "\nEnter id: ";
		cin >> id_emp;
		cout << "Enter salary: ";
		cin >> salary;
		cout << "Enter first letter of position (l, s, m, a, e, r): ";
		cin >> letter;
		switch (letter)
		{
		default:
			break;
		case 'l': emp_pos = laborer; break;
		case 's': emp_pos = secretary; break;
		case 'm': emp_pos = manager; break;
		case 'a': emp_pos = accountant; break;
		case 'e': emp_pos = executive; break;
		case 'r': emp_pos = researcher; break;
		}
	}
	void display_emp()
	{
		date_emp.showdate();
		cout << endl;
		cout << setw(4) << "\nid: " << setw(4) << id_emp << setw(8) << "  Salary: " << setw(9) << salary << " $\n";
		switch (emp_pos)
		{
		case 0: cout << "laborer" << endl; break;
		case 1: cout << "secretary" << endl; break;
		case 2: cout << "manager" << endl; break;
		case 3: cout << "accountant" << endl; break;
		case 4: cout << "executive" << endl; break;
		case 5: cout << "researcher" << endl; break;
		}
	}
};

int main()
{
	employee emp1, emp2, emp3;
	emp1.add_employee();
	emp2.add_employee();
	emp3.add_employee();
	emp1.display_emp();
	emp2.display_emp();
	emp3.display_emp();
	return 0;
}