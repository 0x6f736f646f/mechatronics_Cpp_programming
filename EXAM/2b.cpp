#include <iostream>

using namespace std;

int main()
{
	int iterator, sum = 0;
	cout << "This program will print first 20 numbers" << endl;
	for (iterator = 0; iterator < 20; iterator++)
	{
		cout << iterator << endl;
		sum = sum + iterator;
	}
	cout << "Their sum is " << sum << endl;
	return 0;
}