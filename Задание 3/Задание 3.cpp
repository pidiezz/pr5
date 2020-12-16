#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c;
    double sach;

    cout << "A = " << endl;
    cin >> a;
    cout << "B = " << endl;
    cin >> b;
    cout << "C = " << endl;
    cin >> c;
    sach = (a + b + c) / 3;
    cout << "Среднее арифметическое данных чисел = " << sach << endl;

    system("pause");
}
