/*
	 d. *

        *   *

        *       *

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
		if(num == 1 || num == h)
		{
			for(int i = 1; i <= num; i++)
			{
				cout << "* ";
			}
		}
		else
		{
			cout << "* ";
			for(int i = 1; i <= num - 2; i++)
			{
				cout << "  ";
			}
			cout << "* ";
		}
		cout << "\n";
		num++;
	}

	return 0;
}