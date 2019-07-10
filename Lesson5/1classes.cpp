#include <iostream>

using namespace std;

class Box{
public:
	double height;
	double length;
	double width;
};

int main(){
	//Declaring Box1 and Box2 of type Box
	Box Box1;
	Box Box2;

	double volume = 0.0;

	//Box 1
	Box1.length = 5.0;
	Box1.width = 6.0;
	Box1.height = 7.0;

	//Box 2
	Box2.length = 10.0;
	Box2.width = 12.0;
	Box2.height = 14.0;

	//volume of box 1
	volume = Box1.height * Box1.width * Box1.length;
	cout << "Volume of Box1 : " << volume << endl;

	//volume of box 2
	volume = Box2.height * Box2.width * Box2.length;
	cout << "Volume of Box2 : " << volume << endl;
	
	return 0;	
}