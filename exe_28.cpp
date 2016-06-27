/*
	Tinh tong cac uoc so nho hon so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 0;
	
	for(int i = 1; i < n ; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	cout << "sum: " << sum;
	return 0;
}