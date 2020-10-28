#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, Sum;
	int k;

	cout << "Enter x" << endl;
	cin >> x;
	cout << endl;

	if ((x > 0) && (0.5+pow(x,5)!=0))
	{
		Sum = 0;
		for (k = 1; k <= 5; k++)
		{
			Sum += log10(k * x);
		}
		cout << "Y = " << (cos(x) + Sum) / (0.5 + pow(x, 5));
	}
	else cout << "Error";
}