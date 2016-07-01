/*
	Tinh tong cac chu so chan cua so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 0;

	while(n)
	{
		int temp = n % 10;
		if(temp % 2 == 0)
		{
			sum += temp;
		}
		n /= 10;
	}

	cout << sum;
	return 0;
}