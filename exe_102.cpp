/*
	Viet chuong trinh nhap vao thang nam. Cho biet thang do co bao nhieu ngay.
*/
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "Input month: ";
	cin >> x;
	cout << "Input year: ";
	cin >> y;

	switch (x)
	{
	case 1:
		{
			cout << "31";
			break;
		}
	case 2:
		{
			if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0 ))
			{
				cout << "29";
			}
			else
			{
				cout << "28";
			}
			break;
		}
	case 3:
		{
			cout << "31";
			break;
		}
	case 4:
		{
			cout << "30";
			break;
		}
	case 5:
		{
			cout << "31";
			break;
		}
	case 6:
		{
			cout << "30";
			break;
		}
	case 7:
		{
			cout << "31";
			break;
		}
	case 8:
		{
			cout << "31";
			break;
		}
	case 9:
		{
			cout << "30";
			break;
		}
	case 10:
		{
			cout << "31";
			break;
		}
	case 11:
		{
			cout << "30";
			break;
		}
	case 12:
		{
			cout << "31";
			break;
		}
	default:
		break;
	}
	return 0;
}