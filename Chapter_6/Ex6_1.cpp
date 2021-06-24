#include <iostream>

using namespace std;

class Int
{
private:
	int variable;
public:
	Int() : variable(0)
	{}
	Int(int x): variable(x)
	{}
	void print_var()
	{
		cout << "Your variable: " << variable<<endl;
	}
	void summ_var(Int x1, Int x2)
	{
		variable = x1.variable + x2.variable;
	}
};

int main()
{
	Int v1(500);
	Int v2(123);
	Int v3;
	v1.print_var();
	v2.print_var();
	v3.print_var();
	v3.summ_var(v1, v2);
	v3.print_var();

	return 0;
}