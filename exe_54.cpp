/*
	Dem so luong chu so nho nhat trong so nguyen duong n
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int temp = 10;
	int n2 = n;
	int c = 0;

	while(n)
	{
		int temp2 = n % 10;
		if(temp2 <= temp)
		{
			temp = temp2;
		}
		n /= 10;
	}

	while(n2)
	{
		int temp2 = n2 % 10;
		if(temp2 == temp)
		{
			c++;
		}
		n2 /= 10;
	}

	cout << c;

	return 0;
}