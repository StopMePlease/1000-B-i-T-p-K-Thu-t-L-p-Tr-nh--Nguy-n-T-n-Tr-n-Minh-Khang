/*
	s(n) = sqrt(n! + sqrt((n-1)! + sqrt((n-2)! + ...sqrt(2!+ sqrt(1!)))))
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
	int temp = 1;

	for(int i = 1; i <= n; i++)
	{
		temp *= i;
		sum = sqrt(temp + sum);
	}

	cout << sum;

	return 0;
}