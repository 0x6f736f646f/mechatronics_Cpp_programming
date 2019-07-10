#include <iostream>

using namespace std;

class Box{
public:
	double height;
	double length;
	double width;

	//member functions declaration
	double getvolume(void);
	void setlength(double);
	void setwidth(double);
	void setheight(double);
};

//member function definitions
double Box::getvolume(void){
	return length * width * height;
}

void Box::setlength(double len){
	length = len;
}

void Box::setwidth(double wid){
	width = wid;
}

void Box::setheight(double hei){
	height = hei;
};

int main(){
	//Declaring Box1 and Box2 of type Box
	Box Box1;
	Box Box2;

	double volume = 0.0;

	//Box 1
	Box1.setlength(5.0);
	Box1.setwidth(6.0);
	Box1.setheight(7.0);

	//Box 2
	Box2.setlength(10.0);
	Box2.setwidth(12.0);
	Box2.setheight(14.0);

	//volume of box 1
	volume = Box1.getvolume();
	cout << "Volume of Box1 : " << volume << endl;

	//volume of box 2
	volume = Box2.getvolume();
	cout << "Volume of Box2 : " << volume << endl;
	
	return 0;	
}