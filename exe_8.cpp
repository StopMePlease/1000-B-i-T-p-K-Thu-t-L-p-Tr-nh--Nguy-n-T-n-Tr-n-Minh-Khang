/*
	s(n) = 1/2 + 3/4 + 5/6 + ... + (2 * n + 1)/(2 * n + 2)
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	double sum = 0.5;
	for(int i = 1; i <= n; i++)
	{
		double temp = 1.0 * (2 * i + 1) / (2 * i + 2);
		sum += 1.0 * temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}