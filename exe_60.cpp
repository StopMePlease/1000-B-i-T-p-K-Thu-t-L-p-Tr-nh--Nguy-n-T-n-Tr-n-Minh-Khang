/*
	 Kiem tra cac chu so cua so nguyen duong n co tang dan tu trai qua phai hay khong
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
	int check = 1;

	while(n)
	{
		temp1 = n % 10;
		n /= 10;
		temp2 = n % 10;
		if(temp1 < temp2)
		{
			check = 0;
			break;
		}
		n /= 10;
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