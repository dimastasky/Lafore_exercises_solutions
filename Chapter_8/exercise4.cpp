#include <iostream>

using namespace std;

class Int
{
private:
	int variable;
public:
	Int() : variable(0)
	{}
	Int(int x) : variable(x)
	{}
	void putInt()          //����� Int
	{
		cout << variable;
	}
	void getInt()          //������ Int � ����������
	{
		cin >> variable;
	}
	void print_var()
	{
		cout << "Your variable: " << variable << endl;
	}
	Int operator + (Int x2)
	{
		return checkInt(double(variable)+double(x2.variable));
	}
	Int operator - (Int x2)
	{
		return checkInt(double(variable) - double(x2.variable));
	}
	Int operator * (Int x2)
	{
		return checkInt(double(variable) * double(x2.variable));
	}
	Int operator / (Int x2)
	{
		return checkInt(double(variable) / double(x2.variable));
	}
	Int checkInt(double answer) const
	{
		if (answer > 2147483647 || answer < -2147483647)
		{
			cout << "\n������ ������������\n "; exit(1);
		}
		return Int(answer);
	}
};

int main()
{
	setlocale(LC_ALL, "");

	Int alpha = 20;
	Int beta = 7;
	Int delta, gamma;
	gamma = alpha + beta;     //27
	cout << "\ngamma="; gamma.putInt();
	gamma = alpha - beta;      //13
	cout << "\ngamma="; gamma.putInt();
	gamma = alpha * beta;      //140
	cout << "\ngamma="; gamma.putInt();
	gamma = alpha / beta;      //2
	cout << "\ngamma="; gamma.putInt();
	delta = 2147483647;
	gamma = delta + alpha;    //������ ������������
	delta = -2147483647;
	gamma = delta - alpha;     //������ ������������
	cout << endl;
	return 0;

	return 0;
}