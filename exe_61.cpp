/*
	 Kiem tra cac chu so cua so nguyen duong n co giam dan tu trai qua phai hay khong
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	
	int temp1;
	int temp2;
	int n2 = n / 10;
	int check = 1;

	while(n && n2)
	{
		temp1 = n % 10;
		temp2 = n2 % 10;
		if(temp1 > temp2)
		{
			check = 0;
			break;
		}
		n /= 10;
		n2 /= 10;
	}

	if(check == 1)
	{
		cout << "right";
	}
	else
	{
		cout << "wrong";
	}

	return 0;
}