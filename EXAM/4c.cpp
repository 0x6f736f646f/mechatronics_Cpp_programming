#include <iostream>

using namespace std;

int main()
{
	int subjects[5], sum = 0, iterator;
	cout << "Enter the marks of the 5 subjects you want to find the sum" << endl;
	for(iterator = 0 ; iterator < 5 ; iterator++)
	{
		cout << "Subject " << iterator << " : ";
		cin >> subjects[iterator];
		sum = sum + subjects[iterator];
	}
	cout << "The sum is " << sum << endl; 
	return 0;
}