/*
	Viet chuong trinh nhap ba canh cua 1 tam giac, cho biet tam giac do la tam giac gi?
*/
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;

	if(a == c && a == b && b == c)
	{
		cout << "tam giac deu";
	}
	else if(a == c || a == b || b == c)
	{
		cout << "tam giac can";
	}
	else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
	{
		cout << "tam giac vuong";
	}
	else
	{
		cout << "tam giac thuong";
	}
	return 0;
}