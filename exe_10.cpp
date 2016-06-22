/*
	T(x, n) = x^n
*/
#include <iostream>

using namespace std;

int main()
{
	int n, x;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
	int sum = 1;
	for(int i = 1; i <= n; i++)
	{
		sum *= x;
	}
	cout << "T(" << x << ", " << n << ") =  " << sum;
	return 0;
}