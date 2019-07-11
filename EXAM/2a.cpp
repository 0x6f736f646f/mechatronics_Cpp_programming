#include <iostream>

using namespace std;

int main()
{
	int x = 10 , sub = 0;
	sub = --x;
	cout << "Sub : " << sub << "\nx : " << x << endl;
	x = 10 , sub = 0;
	sub = x--;
	cout << "Sub : " << sub << "\nx : " << x << endl;
	return 0;
}