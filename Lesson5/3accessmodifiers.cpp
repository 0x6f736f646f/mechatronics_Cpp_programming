#include <iostream>

using namespace std;

class Box{
public:
	double length;
	void setwidth(double);
	double getwidth(void);
private:
	double width;
protected:
	int mass;
};

void Box::setwidth(double wid){
	width = wid;
}

double Box::getwidth(){
	return width;
}
class Smallbox:Box{
public:
	void setmass(int m){
		mass = m;
	}
	int getmass(void);
};

int Smallbox::getmass(){
	return mass;
}

int main(){
	Box box;
	Smallbox box2;
	//setting length withour member function
	box.length = 10.0;
	//Its ok because it is public
	cout << "Length of box: " << box.length << endl;

	//set box width without member function
	//box.width = 10.0;
	//Error because its private
	/*
	3accessmodifiers.cpp:11:9: error: 'double Box::width' is private
  	double width;
    	     ^
	3accessmodifiers.cpp:30:6: error: within this context
  	box.width = 10.0;
	*/
	//Set using member function
	box.setwidth(10.0);
	cout << "Width of box : " << box.getwidth() << endl;
	box2.setmass(10);
	cout << "Mass of Smallbox : " << box2.getmass() << endl;
	return 0;
}