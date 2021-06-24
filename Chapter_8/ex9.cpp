#include <iostream>
#include <process.h> // ��� ������� exit()

using namespace std;

const int LIMIT = 100;    // ������ �������

class safearray
{
private:
    int arr[LIMIT];
    int lowerbound; //������ ������� �������
    int upperbound; //������� ������� �������
public:
    safearray(int low, int up) : lowerbound(low), upperbound(up)
    {
        if (lowerbound > upperbound)
        {
            cout << "\n������ ������� ������ �������! "<<endl; exit(1);
        }
        if (upperbound - lowerbound >= LIMIT)
        {
            cout << "\n����� �� ������� ������� �������"<<endl;  exit(1);
        }
    }


    // �������� ��������, ��� ������� ���������� ������!
    int& operator[ ] (int n)
    {
        if (n< lowerbound || n > upperbound)
        {
            cout << "\n��������� ������!"; exit(1);
        }
        return arr[n - lowerbound];
    }
};

int main()
{
    setlocale(LC_ALL, "");

    int lower, upper; // ��� ������ � ������� ������ �������
    cout << "������� ������ ������� �������: "; cin >> lower;
    cout << "������� ������� ������� �������: "; cin >> upper;

    safearray sa1(lower, upper);

    // ������ �������� ���������
    for (int j = lower; j <= upper; j++)
        // ���������� ������� ����� �� ����� ������������ (=)
        sa1[j] = j * 10;

    // ���������� ��������
    for (int j = lower; j <= upper; j++)
    {
        // ���������� ������� ������ �� ����� ������������ (=)
        int temp = sa1[j];
        cout << "������� " << j << " ����� " << temp << endl;
    }


	return 0;
}