/*
	s(n) = sqrt(1 + sqrt(2 + ...sqrt(n-1 + sqrt(n))))
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	double sum = sqrt((double)n);

	for(int i = n - 1; i >= 1; i--)
	{
		sum = sqrt(i + sum);
	}

	cout << sum;

	return 0;
}