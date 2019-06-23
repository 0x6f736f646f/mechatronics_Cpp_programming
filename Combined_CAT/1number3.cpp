#include <iostream>

using namespace std;

int sub = 0, x = 10;

void subsection_a()
{
	sub = --x;
}

void subsection_b()
{
	sub = x--;
}

int main()
{
	subsection_a();
	cout << "Sub section a\nsub = " << sub << endl;
	
	sub = 0, x = 10;
	subsection_b();
	cout << "Sub section b\nsub = " << sub << endl;

	return 0;
}