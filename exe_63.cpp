/*
	 Tim boi chung nho nhat cua a va b
*/
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Inout a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;

	int a2 = a;
	int b2 = b;

	if(a == 0 || b == 0)
	{
		a = a + b;
		cout << a;
		return 0;
	}

	if(a < 0)
	{
		a *= -1;
	}
	if(b < 0)
	{
		b *= -1;
	}

	while(a != b)
	{
		if(a > b)
		{
			a = a - b;
		}
		if(b > a)
		{
			b = b - a;
		}
	}
	int bcnn = (a2 * b2) / a;
	cout << bcnn;
	return 0;
}