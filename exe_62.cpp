/*
	 Tim uoc chung lon nhat cua a va b
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
	cout << a;
	return 0;
}