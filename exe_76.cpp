/*
	Kiem tra so nguyen 4 byte co dang 3^k hay k?
*/
#include <iostream>

using namespace std;

int main()
{

	int n;
	cout << "Input n: ";
	cin >> n;
	int check = 1;

	if(n % 2 == 0)
	{
		cout << "wrong";
		return 0;
	}
	else
	{
		while(true)
		{
			n /= 3;
			if(n % 3 != 0)
			{
				break;
			}
			if( n < 10)
			{
				break;
			}
		}
	}

	if(n == 3 || n == 9)
	{
		check = 0;
	}


	if( check == 0)
	{
		cout << "true";
	}
	else
	{
		cout << "wrong";
	}
	return 0;
}