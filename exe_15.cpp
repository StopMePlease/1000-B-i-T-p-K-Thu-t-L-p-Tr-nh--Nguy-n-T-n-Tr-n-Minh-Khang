/*
	s(n) = 1 + 1/(1 + 2) + 1/(1 + 2 + 3) + ... + 1/(1 + 2 + 3 + ... +n)
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	double sum = 0;
	double temp;
	for(int i = 1; i <= n; i++)
	{
		temp = 0;
		for(int j = 1; j <= i; j++)
		{
			temp += j;
		}
		sum += 1.0 / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}