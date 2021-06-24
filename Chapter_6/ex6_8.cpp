#include <iostream>

using namespace std;

class index_number
{
private:
	int obj_number;
	static int quantity;
public:
	index_number()
	{
		quantity++;
		obj_number = quantity;
	}
	void display() const
	{
		cout << "Object number: " << obj_number << "  Total objects quantity: " << quantity << endl;
	}
};

int index_number::quantity = 0;

int main()
{
	index_number obj1, obj2, obj3,h,fg,asf,fj,aergt,hrtrth;
	obj1.display();
	obj2.display();
	obj3.display();
	hrtrth.display();
	asf.display();

	return 0;
}