#include <iostream>
#include <cmath>

using namespace std;

int main(){
	short s = 10;
	int i = -100;
	long l = 9182920;
	float f = 738.28;
	double d = 637.702828;

	//mathematical operations;
	cout << "Sin(" << d << ") : " << sin(d) << endl;
	cout << "abs(" << i << ") : " << abs(i) << endl;
	cout << "floor(" << d << ") : " << floor(d) << endl;
	cout << "Sqrt(" << f << ") : " << sqrt(f) << endl;
	cout << "pow(" << d << ", 2) : " << pow(d, 2) << endl;

	return 0;
}
