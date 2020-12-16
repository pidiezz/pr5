#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int a, c;
    int b = 0;
    cout << "Число =" << endl;
    cin >> a;
    c = a;
    while (c != 0)
    {
        b = b * 10 + c % 10;
        c /= 10;
    }
    if (a == b)
    {
        cout << "Число является палиндромом." << endl;
    }
    else
        cout << "Число не является палиндромом." << endl;

    system("pause");
}