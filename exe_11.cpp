/*
	s(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3....n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int sum = 1;
	int temp = 1;
	for(int i = 2; i <= n; i++)
	{
		temp = 1;		
		for(int j = 2; j <= i; j++)
		{
			temp *= j;
		}
		sum += temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}