#include <iostream>

using namespace std;

int main()
{
	float celsius, fahrenheit;
	cout << "Enter the degree in celsius you want to convert to fahrenheit\nCelsius: " ;
	cin >> celsius;
	fahrenheit = ((1.8 * celsius) + 32);
	cout << "Fahrenheit: " << fahrenheit << endl;
	return 0;
}