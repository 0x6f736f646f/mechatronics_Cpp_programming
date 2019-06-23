#include <iostream>

using namespace std;

int main()
{
	int num = 0, sum = 0;
	for(num = 0; num < 20; num++)
	{
		cout << num << endl;
		sum = sum + num;
	}
	cout << "The sum is: " << sum << endl;
	return 0;
}