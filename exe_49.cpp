/*
	Tim chu so dau tien cua so nguyen duong n
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int c = log10((double)n);

	for(int i = 1; i <= c; i++)
	{
		n /= 10;
	}

	cout << n;

	return 0;
}