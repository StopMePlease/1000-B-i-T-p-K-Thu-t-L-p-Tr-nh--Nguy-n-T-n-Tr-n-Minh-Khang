/*
	  a.
                  *

              *   *   *

          *   *   *   *   *

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
		for(int i = 0; i < h - num; i++)
		{
			cout << "  ";
		}
		for(int i = 0; i < num * 2 - 1; i++)
		{
			cout << "* ";
		}
		cout << "\n";
		num++;
	}

	return 0;
}