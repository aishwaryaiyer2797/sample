#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b =20;
	int *p = &a;
	*p=30;
	p=&b;
	*p=40;

	cout << a << endl;
	cout << *p << endl;
//	cout <<	

	int& r= c;
	r = 50;

	cout << c << endl;
	r =b;
	cout << c << endl;
	return 0;

}
