#include <iostream>

using namespace std;

int main(){
	int a = 21;
	int c;

	c = a;
	cout << "Operations is =\t";
	cout << "Value of c is " << c << endl;

	c += a;
	cout << "Operations is +=\t";
	cout << "Value of c is " << c << endl;

	c -= a;
	cout << "Operations is -=\t";
	cout << "Value of c is " << c << endl;

	c *= a;
	cout << "Operations is *=\t";
	cout << "Value of c is " << c << endl;

	c /= a;
	cout << "Operations is /=\t";
	cout << "Value of c is " << c << endl;

	c = 200;
	c %= a;
	cout << "Operations is %=\t";
	cout << "Value of c is " << c << endl;
	
	c <<= a;
	cout << "Operations is <<=\t";
	cout << "Value of c is " << c << endl;

	c >>= a;
	cout << "Operations is >>=\t";
	cout << "Value of c is " << c << endl;

	c &= a;
	cout << "Operations is &=\t";
	cout << "Value of c is " << c << endl;

	c ^= a;
	cout << "Operations is ^=\t";
	cout << "Value of c is " << c << endl;

	c |= a;
	cout << "Operations is |=\t";
	cout << "Value of c is " << c << endl;
	return 0;
}