/*
	s(n) = 1 + 1/2 + 1/3 + ... + 1/n
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
		sum += (1.0 / i);
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}