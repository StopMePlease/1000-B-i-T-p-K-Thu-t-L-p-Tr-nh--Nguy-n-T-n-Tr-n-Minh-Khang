/*
	 Cho n la so nguyen duong. Tim gia tri nguyen duong k lon nhat sao cho s(k) < n. [s(k) = 1 + 2 + ... +k]
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;

	int sum = 0;
	int i;
	for(i = 1; i <= n; i++)
	{
		sum += i;
		if(sum > n)
		{
			sum -= i;
			break;
		}
	}
	i -= 1;
	cout << "sum: " << sum << endl;
	cout << "k: " <<i;

	return 0;
}