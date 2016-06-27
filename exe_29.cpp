/*
	Tim uoc so le lon nhat cua so nguyen duong n
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int min = 1;
	
	for(int i = 1; i < n / 2 ; i += 2)
	{
		if(n % i == 0)
		{
			if(min < i)
			{
				min = i;
			}
		}
	}
	cout << "min: " << min;
	return 0;
}