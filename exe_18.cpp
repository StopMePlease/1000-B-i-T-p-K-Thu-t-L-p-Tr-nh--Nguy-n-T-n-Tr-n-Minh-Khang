/*
	s(n) = s(n) = 1 + x^2/2! + x^4/4! + ... + x^(2n)/(2n)!
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

	double sum = 1;
	double temp, tempx;
	for(int i = 1; i <= n; i++)
	{
		temp = 1;
		tempx = 1;
		for(int j = 1; j <= i * 2; j++)
		{
			tempx *= x;
			temp *= j;
		}
		sum += 1.0 * tempx / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}