#include <iostream>


using namespace std;

const int MAX = 100;

int maxint(int[MAX], int);

int main()
{
    setlocale(LC_ALL, "");

    int arr_size, index_max;
    int arr[MAX];

    do
    {
        cout << "������� ������ ������� (1-100): ";
        cin >> arr_size;
    } while (arr_size < 0 || arr_size>100);
    
    for (int i = 0; i < arr_size; i++)
    {
        cout << "������� " << i + 1 << ": ";
        cin >> arr[i];
    }

    index_max = maxint(arr, arr_size);

    cout << "���������� �������: " << arr[index_max] <<endl;
    cout << "������ ��������: " << index_max + 1;

    return 0;
}

int maxint(int num[MAX], int size)
{
    int index, max_index;

    max_index = 0;
    for (int j = 0; j < size; j++)
    {
        if (num[j] > num[max_index])
            max_index = j;
    }
    return max_index;
}
