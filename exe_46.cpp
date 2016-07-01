/*
	Dem so luong chu so le cua so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int c = 0;

	while(n)
	{
		int temp = n % 10;
		if(temp % 2 != 0)
		{
			c++;
		}
		n /= 10;
	}

	cout << c;
	return 0;
}