/*
	s(n) = 1^2 + 2^2 + 3^2 + ... + n^2
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += i * i;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}