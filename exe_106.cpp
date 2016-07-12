/*
	Hay in ra cach doc cua 1 so co 3 chu so
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
	int temp2 = n % 10;
	n = n / 10;
	switch (n)
	{
	case 1:
		{
			cout << "Mot Tram ";
			break;
		}
	case 2:
		{
			cout << "Hai Tram ";
			break;
		}
	case 3:
		{
			cout << "Ba Tram ";
			break;
		}
	case 4:
		{
			cout << "Bon Tram ";
			break;
		}
	case 5:
		{
			cout << "Nam Tram ";
			break;
		}
	case 6:
		{
			cout << "Sau Tram ";
			break;
		}
	case 7:
		{
			cout << "Bay Tram ";
			break;
		}
	case 8:
		{
			cout << "Tam Tram ";
			break;
		}
	case 9:
		{
			cout << "Chin Tram ";
			break;
		}
	default:
		break;
	}

	switch (temp2)
	{
	case 1:
		{
			cout << "Muoi ";
			break;
		}
	case 2:
		{
			cout << "Hai Muoi ";
			break;
		}
	case 3:
		{
			cout << "Ba Muoi ";
			break;
		}
	case 4:
		{
			cout << "Bon Muoi ";
			break;
		}
	case 5:
		{
			cout << "Nam Muoi ";
			break;
		}
	case 6:
		{
			cout << "Sau Muoi ";
			break;
		}
	case 7:
		{
			cout << "Bay Muoi ";
			break;
		}
	case 8:
		{
			cout << "Tam Muoi ";
			break;
		}
	case 9:
		{
			cout << "Chin Muoi ";
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