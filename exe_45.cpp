/*
	 Tinh tich cac chu so cua so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 1;

	while(n)
	{
		sum *= n % 10;
		n = n / 10;
	}

	cout << sum;
	return 0;
}