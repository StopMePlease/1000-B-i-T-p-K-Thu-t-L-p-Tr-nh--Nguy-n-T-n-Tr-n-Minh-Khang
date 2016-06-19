/*
	s(n) = 1/2 + 2/3 + 3/4 + ... + n/(n + 1)
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
		sum += 1.0 * i / ( i + 1);
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}