#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Вывод последовательности простых чисел = ";
    for (int i = 2; i < 200; i++)
        for (int a = 2; a < i; a++)
        {
            if (i % a == 0)
                break;
            else if (i == a + 1)
                cout << i << " ";
        }
    system("pause");

}