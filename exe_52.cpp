/*
	Tim chu so nho nhat cua so nguyen duong n
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

	while(n)
	{
		int temp2 = n % 10;
		if(temp2 <= temp)
		{
			temp = temp2;
		}
		n /= 10;
	}

	cout << temp;

	return 0;
}