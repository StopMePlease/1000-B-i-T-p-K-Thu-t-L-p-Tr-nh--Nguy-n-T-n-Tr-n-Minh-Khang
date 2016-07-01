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

	int n2 = n;
	int c = log10((double)n);
	int c2 = 0;

	for(int i = 1; i <= c; i++)
	{
		n /= 10;
	}

	while(n2)
	{
		int temp = n2 % 10;
		if(temp == n)
		{
			c2++;
		}
		n2 /= 10;
	}

	cout << c2;

	return 0;
}