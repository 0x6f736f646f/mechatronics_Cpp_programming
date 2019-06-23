#include <iostream>

using namespace std;

int main()
{
	int celsius, fahrenheit;
	cout << "Enter temperature in celsius you want to convert to fahrenheit" << endl;
	cin >> celsius;
	fahrenheit = ((1.8 * celsius) + 32);
	cout << "celsius: " << celsius << endl;
	cout << "fahrenheit: " << fahrenheit << endl;
	return 0;
}