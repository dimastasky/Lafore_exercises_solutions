// strplus.cpp
// перегрузка операции + дл€ строк
// “о же самое делает и стандартный класс string!!!
#include <iostream>
using namespace std;
#include <string.h>   // дл€ функций strcpy, strcat
#include <stdlib.h>   // дл€ функции exit
///////////////////////////////////////////////////////////
class String          // наш класс дл€ строк
{
private:
    enum { SZ = 80 }; // максимальный размер строки
    char str[SZ];  // массив дл€ строки
public:
    // конструктор без параметров
    String()
    {
        strcpy_s(str, "");
    }
    // конструктор с одним параметром
    String(const char s[])
    {
        strcpy_s(str, s);
    }
    // показ строки
    void display() const
    {
        cout << str;
    }
    // оператор сложени€
    String operator+= (String ss) const
    {
        String temp;  // временна€ переменна€
        if (strlen(str) + strlen(ss.str) < SZ)
        {
            strcpy_s(temp.str, str);    // копируем содержимое первой строки
            strcat_s(temp.str, ss.str); // добавл€ем содержимое второй строки
        }
        else
        {
            cout << "\nѕереполнение!";
            exit(1);
        }
        return temp;  // возвращаем результат
    }
};
///////////////////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL, "Russian");

    String s1 = "\n— –ождеством! "; // используем конструктор с параметром
    String s2 = "— Ќовым годом!";   // используем конструктор с параметром
    String s3;                      // используем конструктор без параметров

    // показываем строки
    s1.display();
    s2.display();
    s3.display();
    s3 = s1 += s2;       // присваиваем строке s3 результат сложени€ строк s1 и s2

    s3.display();     // показываем результат
    cout << endl;

    return 0;
}