/*
	 In ra bang cuu chuong
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cout << "Nhap bang cuu chuong: ";
	cin >> n;

	for(int i = 1; i <= 10; i++)
	{
		cout << n << " * " << setw(2) << i << " = " << setw(2) << i * n << endl;
	}

	return 0;
}