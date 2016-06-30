/*
	 s(n) = sqrt(2 + sqrt(x^n + sqrt( x^(n-1) + ... + sqrt(x^2 +sqrt(x)))))
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, x;
	cout << "Input n: ";
	cin >> n;

	cout << "Input x: ";
	cin >> x;

	double sum = 0;
	int temp = 1;

	for(int i = 1; i <= n; i++)
	{
		temp *= x;
		sum = sqrt(temp + sum);
	}

	cout << sum;

	return 0;
}