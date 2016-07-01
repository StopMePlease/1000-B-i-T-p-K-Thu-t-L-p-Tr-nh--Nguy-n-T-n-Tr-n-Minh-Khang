/*
	 Kiem tra so nguyen duong n co toan chu so chan hay khong
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int check = 0;

	while(n)
	{
		int temp = n % 10;
		if(temp % 2 != 0)
		{
			check = 1;
			break;
		}
		n /= 10;
	}

	if(check == 1)
	{
		cout << "found odd number";
	}
	else
	{
		cout << "all even numbers";
	}

	return 0;
}