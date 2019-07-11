#include <iostream>

using namespace std;

class Person{
private:
	int age;
public:
	float height;
protected:
	float weight;
};

class Student : public Person{
	float sups;
	//To see default specifier
};

class University_student : public Student{
public:
	float chapatis;
};

int main()
{
	University_student lect;
	lect.height = 1.5;
	//lect.weight = 67.3;
	//This can't run since the weight is protected
	//lect.sups = 0;
	//Cant access sups since sups are private
	//lect.age = 22;
	//This ca't run since age is private
	lect.chapatis = 789;
	return 0;
}