/*
	s(n) = x^2 + x^4 + x^6 + ... + x^2n
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

	int sum = 0;
	int temp;
	for(int i = 1; i <= n; i++)
	{
		temp = 1;		
		for(int j = 1; j <= i * 2; j++)
		{
			temp *= x;
		}
		sum += temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}