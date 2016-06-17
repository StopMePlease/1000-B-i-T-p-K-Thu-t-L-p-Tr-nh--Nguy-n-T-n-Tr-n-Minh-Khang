/*
	s(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	double sum = 1;
	for(int i = 1; i <= n; i++)
	{
		int temp = 2 * i + 1;
		sum += 1.0 / temp;
	}
	cout << "s(" << n << ") =  " << sum;
	return 0;
}