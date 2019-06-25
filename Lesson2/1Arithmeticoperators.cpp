#include <iostream>

using namespace std;

int main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	cout << a << " + " << b << " = " << c << endl;

	c = a - b;
	cout << a << " - " << b << " = " << c << endl;

	c = a * b;
	cout << a << " x " << b << " = " << c << endl;

	c = a / b;
	cout << a << " / " << b << " = " << c << endl;

	c = a % b;
	cout << a << " % "  << b << " = " << c << endl;

	c = a;
	cout << a << "++ " << " = " << c++ << endl;

	c = b;
	cout << "--" << b << " = " << --c << endl;	
	
	return 0;
}