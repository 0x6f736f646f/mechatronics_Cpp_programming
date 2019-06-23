#include <iostream>

using namespace std;

int main()
{
	int iter, subjects[5];
	float sum = 0;
	cout << "Enter the marks for the 5 subjects:" << endl;
	for(iter=0;iter<5;iter++)
	{
		cout << "Subject " << iter << " : ";
		cin >> subjects[iter];
		sum = sum + subjects[iter];
	}
	cout << "Your percentage is: " << sum/5 << endl;
	return 0;
}