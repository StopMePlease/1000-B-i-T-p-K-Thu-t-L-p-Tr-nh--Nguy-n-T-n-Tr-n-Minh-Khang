/*
	 Kiem tra so nguyen duong n co phai la so doi xung hay khong
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int n2 = n;
	int sum = 0;

	int c = log10((double)n) ;
	int temp = 10;

	for(int j = 1; j < c; j++)
	{
		temp *= 10;
	}

	for(int i = 1; i < c + 2; i++)
	{
		sum += (n % 10) * temp;
		temp /= 10;
		n /= 10;	
	}

	if(n2 == sum)
	{
		cout << "right";
	}
	else
	{
		cout << "wrong";
	}



	return 0;
}