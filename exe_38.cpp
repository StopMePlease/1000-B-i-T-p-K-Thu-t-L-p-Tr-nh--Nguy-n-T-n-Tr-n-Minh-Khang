/*
	s(n) = (n + ((n-1) + ...(2 + 1^(1/2))^(1/3))^(1/(n)))^(1/n + 1)
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	double sum = 0;

	for(int i = 1; i <= n; i++)
	{
		sum = pow(i + sum, 1.0 / (i + 1));
	}

	cout << sum;

	return 0;
}