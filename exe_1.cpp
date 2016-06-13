/*
	s(n) = 1 + 2 + 3 + ... + n
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
		sum += i;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}