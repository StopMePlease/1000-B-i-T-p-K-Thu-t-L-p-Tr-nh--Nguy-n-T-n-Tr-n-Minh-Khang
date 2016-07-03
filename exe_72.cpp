/*
	ss(x, n) = -x + x^2/2! - x^3/3! + ... + (-1)^n.x^n/n!
*/
#include <iostream>

using namespace std;

int main()
{
	int n, x;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;

	double sum = 0;
	double temp, tempx;
	for(int i = 1; i <= n; i++)
	{
		temp = 1;
		tempx = 1;
		for(int j = 1; j <= i; j++)
		{
			tempx *= x;
			temp *= j;
		}
		if( i % 2 != 0)
		{
			tempx *= -1;
		}
		sum += 1.0 * tempx / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}