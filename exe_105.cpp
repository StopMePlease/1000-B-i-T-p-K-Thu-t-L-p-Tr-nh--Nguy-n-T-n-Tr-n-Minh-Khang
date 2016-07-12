/*
	Hay in ra cach doc cua 1 so co 2 chu so
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int temp = n % 10;
	n = n / 10;
	switch (n)
	{
	case 1:
		{
			cout << "Muoi ";
			break;
		}
	case 2:
		{
			cout << "Hai muoi ";
			break;
		}
	case 3:
		{
			cout << "Ba muoi ";
			break;
		}
	case 4:
		{
			cout << "Bon muoi ";
			break;
		}
	case 5:
		{
			cout << "Nam muoi ";
			break;
		}
	case 6:
		{
			cout << "Sau muoi ";
			break;
		}
	case 7:
		{
			cout << "Bay muoi ";
			break;
		}
	case 8:
		{
			cout << "Tam muoi ";
			break;
		}
	case 9:
		{
			cout << "Chin muoi ";
			break;
		}
	default:
		break;
	}

	switch (temp)
	{
	case 1:
		{
			cout << "Mot";
			break;
		}
	case 2:
		{
			cout << "Hai";
			break;
		}
	case 3:
		{
			cout << "Ba";
			break;
		}
	case 4:
		{
			cout << "Bon";
			break;
		}
	case 5:
		{
			cout << "Nam";
			break;
		}
	case 6:
		{
			cout << "Sau";
			break;
		}
	case 7:
		{
			cout << "Bay";
			break;
		}
	case 8:
		{
			cout << "Tam";
			break;
		}
	case 9:
		{
			cout << "Chin";
			break;
		}
	default:
		break;
	}

	return 0;
}