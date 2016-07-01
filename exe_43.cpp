/*
	 Dem so luong chu so cua so nguyen duong.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int count =  log10((double)n) + 1;
	cout << count;

	return 0;
}