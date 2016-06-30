/*
	 s(n) = 1 / (1 + 1 / (1 + ... 1 / (1 + 1 / (1 + 1))))
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

	for(int i = 1; i <= n; i++)
	{
		sum = 1.0 / (1 + sum);
	}
	
	cout << sum;

	return 0;
}