#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c, x, F;

    cout << "Введіть a, b, c, x" << endl;
    cin >> a >> b >> c >> x;

    if ((x < 0) && (b != 0)) F = (-a * x * x) + b;
    else if ((x > 0) && (b == 0)) F = (x / (x - c)) + 5.5;
    else F = x / -c;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
    cout << " F = " << F << endl;
}