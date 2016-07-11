/*
	  viet chuong trinh nhap vap 1 ngay(ngay-thang-nam). Tinh ngay do la ngay thu bao nhieu trong nam
*/
#include <iostream>

using namespace std;

int main()
{
	int x, y, z, sum = 0, check = 0, temp = 1;
	cout << "Input day: ";
	cin >> x;
	cout << "Input month: ";
	cin >> y;
	cout << "Input year: ";
	cin >> z;

	if((z % 400 == 0) || (z % 4 == 0 && z % 100 != 0))
	{
		check = 1;
	}

	if(y > 1)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}
	else
	{
		cout << x;
		return 0;
	}

	if(y > 2)
	{
		if(check == 1)
		{
			sum += 29;
		}
		else
		{
			sum += 28;
		}	
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}
	
	if(y > 3)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 4)
	{
		sum += 30;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 5)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 6)
	{
		sum += 30;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 7)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 8)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 9)
	{
		sum += 30;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 10)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 11)
	{
		sum += 30;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}

	if(y > 12)
	{
		sum += 31;
		temp++;
		if(temp == y)
		{
			sum += x;
			cout << sum;
			return 0;
		}
	}
	
	return 0;
}