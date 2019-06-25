#include <iostream>

using namespace std;

/*
/auto is the default storage class for all local variables

/register to define local variables that should be 
stored in a register instead of RAM

/static to keep local variables in existence during the 
life-time of the program instead of creating and 
destroying when shifting scopes
*/

void func_static (void);
void func_register (void);

//Global variable
static int count = 10;

int main(){
	cout << "Using Static variable for i" << endl;
	while (count--)
	{
		func_static();
	}
	cout << "Using register variable for i" << endl;
	count = 10;
	while (count--)
	{
		func_register();
	}

	return 0;
}

//Function definition

void func_static(void){
	//local static variable
	static int i = 5;
	i++;
	cout << "i is " << i;
	cout << " and count is " << count << endl;
}

void func_register(void){
	//local static variable
	register int i = 5;
	i++;
	cout << "i is " << i;
	cout << " and count is " << count << endl;
}