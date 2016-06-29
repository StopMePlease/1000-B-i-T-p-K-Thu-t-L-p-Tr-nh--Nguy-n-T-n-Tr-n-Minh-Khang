/*
	s(n) = sqrt(n + sqrt(n-1 + sqrt(n-2 + ...sqrt(2+ sqrt(1)))))
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	double sum = 1;

	for(int i = 2; i <= n; i++)
	{
		sum = sqrt(i + sum);
	}

	cout << sum;

	return 0;
}