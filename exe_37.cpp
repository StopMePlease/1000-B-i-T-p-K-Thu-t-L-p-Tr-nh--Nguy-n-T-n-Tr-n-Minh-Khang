/*
	s(n) = (n + ((n-1) + ...(3 + 2^(1/2))^(1/3))^(1/(n-1)))^(1/n)
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
	
	for(int i = 1; i < n; i++)
	{
		sum = pow(sum + i + 1, 1.0 / (i + 1));
	}

	cout << sum;

	return 0;
}