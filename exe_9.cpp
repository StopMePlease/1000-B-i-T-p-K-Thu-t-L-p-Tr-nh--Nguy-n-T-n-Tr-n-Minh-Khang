/*
	s(n) = 1 * 2 * 3 * ... * n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	double sum = 1;
	for(int i = 2; i <= n; i++)
	{
		sum *= i;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}