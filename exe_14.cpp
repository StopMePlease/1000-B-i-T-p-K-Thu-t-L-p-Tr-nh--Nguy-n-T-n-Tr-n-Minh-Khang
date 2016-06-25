/*
	s(n) = x + x^3 + x^5 + ... + x^(2n + 1)
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

	int sum = x;
	int temp;
	for(int i = 1; i <= n; i++)
	{
		temp = 1;		
		for(int j = 1; j <= (i * 2) + 1; j++)
		{
			temp *= x;
		}
		sum += temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}