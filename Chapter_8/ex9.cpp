#include <iostream>
#include <process.h> // ƒл€ функции exit()

using namespace std;

const int LIMIT = 100;    // размер массива

class safearray
{
private:
    int arr[LIMIT];
    int lowerbound; //нижн€€ граница массива
    int upperbound; //верхн€€ граница массива
public:
    safearray(int low, int up) : lowerbound(low), upperbound(up)
    {
        if (lowerbound > upperbound)
        {
            cout << "\nЌижн€€ граница больше верхней! "<<endl; exit(1);
        }
        if (upperbound - lowerbound >= LIMIT)
        {
            cout << "\n¬ыход за пределы границы массива"<<endl;  exit(1);
        }
    }


    // обратите внимание, что функци€ возвращает ссылку!
    int& operator[ ] (int n)
    {
        if (n< lowerbound || n > upperbound)
        {
            cout << "\nќшибочный индекс!"; exit(1);
        }
        return arr[n - lowerbound];
    }
};

int main()
{
    setlocale(LC_ALL, "");

    int lower, upper; // ƒл€ нижней и верхней границ массива
    cout << "¬ведите нижнюю границу массива: "; cin >> lower;
    cout << "¬ведите верхнюю границу массива: "; cin >> upper;

    safearray sa1(lower, upper);

    // задаем значени€ элементов
    for (int j = lower; j <= upper; j++)
        // используем функцию слева от знака присваивани€ (=)
        sa1[j] = j * 10;

    // показываем элементы
    for (int j = lower; j <= upper; j++)
    {
        // используем функцию справа от знака присваивани€ (=)
        int temp = sa1[j];
        cout << "Ёлемент " << j << " равен " << temp << endl;
    }


	return 0;
}