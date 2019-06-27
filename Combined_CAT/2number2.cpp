#include <iostream>

using namespace std;

float addition(float, float);

int main()
{
	float number1, number2;
	cout << "Enter 2 numbers you want to add" << endl;
	cin >> number1;
	cin >> number2;
	cout << "The sum is : " << addition(number1, number2) << endl;
	return 0;
}

float addition(float num1, float num2)
{
	return num1 + num2;
}