/*
	Kiem tra so nguyen 4 byte co dang 2k hay k?
*/
#include <iostream>

using namespace std;

int main()
{

	int n;
	cout << "Input n: ";
	cin >> n;
	int check = 1;

	if(n % 2 != 0)
	{
		cout << "wrong";
		return 0;
	}
	else
	{
		while(true)
		{
			n /= 2;
			if(n % 2 != 0)
			{
				break;
			}
			if( n < 10)
			{
				break;
			}
		}
	}

	if(n == 2 || n == 4 || n == 8)
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