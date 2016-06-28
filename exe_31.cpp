/*
	 Kiem tra xem co phai la nguyen to hay k?
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	if(n == 2)
	{
		cout << "is prime";
		return 0;
	}

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			cout << "not prime";
			return 0;
		}
	}
	cout << "is prime";
	return 0;
}