/*
	s(n) = sqrt(2 + sqrt(2 + sqrt( 2 + ... + sqrt(2 +sqrt(2)))))
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

	for(int i = 0; i < n; i++)
	{
		sum = sqrt(2 + sum);
	}

	cout << sum;

	return 0;
}