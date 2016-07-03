/*
	  s(x, n) = x - x^2 + x^3 + ... +(-1)^(n+1).x^(n)
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
		for(int j = 1; j <= i; j++)
		{
			temp *= x;
		}
		if(i % 2 == 0)
		{
			temp *= -1;
		}
		sum += temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}