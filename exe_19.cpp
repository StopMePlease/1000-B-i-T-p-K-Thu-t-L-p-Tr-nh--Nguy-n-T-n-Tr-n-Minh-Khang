/*
	s(n) = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!
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

	double sum = 1 + x;
	double temp, tempx;
	for(int i = 1; i <= n; i++)
	{
		temp = 1;
		tempx = 1;
		for(int j = 1; j <= i * 2 + 1; j++)
		{
			tempx *= x;
			temp *= j;
		}
		sum += 1.0 * tempx / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}