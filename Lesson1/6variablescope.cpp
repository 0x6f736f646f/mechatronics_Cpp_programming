#include <iostream>

using namespace std;

//global variable declaration
int g;

int main()
{
	//Local variable declaration
	int a, b, c;

	//Local variable initialization
	a = 10;
	b = 20;
	c = a + b;

	//intialization
	g = a + 23;
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " + " << 23 << " = " << g << endl;
	return 0;
}