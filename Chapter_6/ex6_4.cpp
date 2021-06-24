#include <iostream>
#include <iomanip>

using namespace std;


class employee
{
private:
	int id_emp;
	float salary;
public:
	employee() : id_emp(0), salary(0)
	{}
	employee(int a, float b): id_emp(a), salary(b)
	{}
	void enter_data()
	{
		cout << "\nEnter id: ";
		cin >> id_emp;
		cout << "Enter salary: ";
		cin >> salary;
	}
	void display_emp()
	{
		cout << setw(4) << "\nid: " << setw(4) << id_emp << setw(8) << "  Salary: " << setw(9) << salary << " $";
	}
};

int main()
{
	employee e1, e2, e3;
	e1.enter_data();
	e2.enter_data();
	e3.enter_data();
	e1.display_emp();
	e2.display_emp();
	e3.display_emp();

	return 0;
}