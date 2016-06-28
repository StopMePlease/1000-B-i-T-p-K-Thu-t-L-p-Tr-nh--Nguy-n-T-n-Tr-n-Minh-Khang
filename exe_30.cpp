/*
	 Kiem tra xem co phai la hoan thien hay k?
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 0;

	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	if(sum == n)
	{
		cout << "Right";
	}
	else
	{
		cout << "Wrong";
	}
	return 0;
}