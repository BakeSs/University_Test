#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, Sum, y = 0;
	int k;

	cout << "Enter x" << endl;
	cin >> x;

	for (k = 1; k <= 5; k++)
	{
		Sum = log10(k * x);
		y += Sum;
	}
	cout << ((cos(x) + y) / (0.5 + pow(x, 5)));
}