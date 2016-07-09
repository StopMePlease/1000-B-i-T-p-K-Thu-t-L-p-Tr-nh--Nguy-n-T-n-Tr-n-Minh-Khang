/*
	 viet chuong trinh nhap vap 1 ngay(ngay-thang-nam). Tinh ngay ke ngay vua nhap(ngay thang nam)
*/
#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	cout << "Input day: ";
	cin >> x;
	cout << "Input month: ";
	cin >> y;
	cout << "Input year: ";
	cin >> z;

	int check = 0;
	// truong hop dac biet, vua la nam nhuan vua la thang 2
	if((z % 400 == 0) || (z % 4 == 0 && z % 100 != 0 ))
	{
		check = 1;
	}

	if(y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10)
	{
		if(x == 31)
		{
			x = 1;
			y++;
		}
		else
		{
			x++;
		}
	}
	else if(y == 4 || y == 6 || y == 9 || y == 11)
	{
		if(x == 30)
		{
			x = 1;
			y++;
		}
		else
		{
			x++;
		}
	}
	else if(y == 2)
	{
		if(check == 1)
		{
			if(x == 29)
			{
				x = 1;
				y++;
			}
			else
			{
				x++;
			}
		}
		else if(x == 28)
		{
			x = 1;
			y++;
		}
	}
	if(y == 12 && x == 31)
	{
		y = 1;
		x = 1;
		z++;
	}

	cout << x << "/" << y << "/" << z;
	return 0;
}