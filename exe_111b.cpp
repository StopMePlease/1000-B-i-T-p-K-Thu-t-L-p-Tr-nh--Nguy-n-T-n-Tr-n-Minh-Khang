/*
	   b.         *

              *       *

          *               *

      *   *   *   *   *   *   *
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
		for(int i =0; i < h - num; i++)
		{
			cout << "  ";
		}
		if(num == 1 || num == h)
		{
			for(int i = 1; i <= num * 2 - 1; i++)
			{
				cout << "* ";
			}
		}
		else
		{
			cout << "* ";
			for(int i = 1; i <= 2 * num - 3; i++)
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