/*
	Dem so luong uoc so chan cua so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 1;
	
	for(int i = 2; i <= n ; i += 2)
	{
		if(n % i == 0)
		{
			sum++;
		}
	}
	cout << "sum: " << sum;
	return 0;
}