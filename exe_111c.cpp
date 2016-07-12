/*
	  c.*

        *   *

        *   *   *

        *   *   *   *
*/
#include <iostream>

using namespace std;

int main()
{
	int h;
	cout << "Input h: ";
	cin >> h;

	int num = 1;
	while(num <= h)
	{
		for(int i = 1; i <= num; i++)
		{
			cout << "* ";
		}
		cout << "\n";
		num++;
	}

	return 0;
}