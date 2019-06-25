#include <iostream>

using namespace std;

//function declaration
int max(int, int);

int main(){
	//local variable declaration
	int a = 100, b = 200, ret;

	//calling function to get max value
	ret = max(a,b);
	cout << "Max values is : " << ret << endl;

	return 0;
}

int max(int num1, int num2){
	if (num1 > num2)
	{
		return num1;
	} else {
		return num2;
	}
}