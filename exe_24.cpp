/*
	Liet ke tat ca uoc so le cua so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 0;
	
	for(int i = 1; i <= n ; i += 2)
	{
		if(n % i == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}