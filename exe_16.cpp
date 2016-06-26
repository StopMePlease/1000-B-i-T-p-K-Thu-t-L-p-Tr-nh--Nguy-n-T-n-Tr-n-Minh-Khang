/*
	s(n) = 1 + 1/(1 + 2) + 1/(1 + 2 + 3) + ... + 1/(1 + 2 + 3 + ... +n)
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
		temp = 0;
		tempx = 1;
		for(int j = 1; j <= i; j++)
		{
			tempx *= x;
			temp += j;
		}
		sum += 1.0 * tempx / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}