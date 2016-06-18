/*
	s(n) = 1/(1 * 2) + 1/(2 * 3) + ... + 1/(n * (n + 1))
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	double sum = 0;
	for(int i = 1; i <= n; i++)
	{
		int temp = i * ( i + 1);
		sum += 1.0 / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}