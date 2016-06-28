/*
	 Kiem tra xem co phai la chinh phuong hay k?
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int temp = sqrt((double)n);

	if(n == temp * temp)
	{
		cout << "right";
	}
	else
	{
		cout << "wrong";
	}

	return 0;
}