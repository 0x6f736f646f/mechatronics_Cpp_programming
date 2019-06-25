#include <iostream>

using namespace std;

#define RADIUS 7
#define NEWLINE '\n'

int main (){
	float area;
	const float PIE = 3.142;
	area = PIE * RADIUS * RADIUS;
	cout << "Area of a circle of radius 7 is " << area << NEWLINE;
	return 0;

}