#include <iostream>
#include<string>

using namespace std;

class employee
{
private:
	string name;
	long id_num;
public:
	void getdata()
	{
		cout << "\nВведите имя сотрудника: ";
		cin.ignore();
		getline(cin, name);
		cout << "Введите номер сотрудника: ";
		cin >> id_num;
	}
	void putdata()
	{
		cout << " Name: " << name << " number: " << id_num << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");

	const int MAX = 100;
	int n = 0;
	char yesno;

	employee emp_dist1[MAX];
	do
	{
		emp_dist1[n++].getdata();
		cout << "Продолжить (y/n)?: ";
		cin >> yesno;
	} while (yesno != 'n' && n < MAX);
	for (int j = 0; j < n; j++)
	{
		cout << "id: " << j+1;
		emp_dist1[j].putdata();
	}


	return 0;
}