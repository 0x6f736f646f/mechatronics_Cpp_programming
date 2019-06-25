#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = 20, c;
	if (a && b){
		cout << a << " is similar to " << b << endl;
	}
	if (a || b){
		cout << "somehow a and b are similar" << endl;
	}
	if (!(a && b)){
		cout << "Condition is true" << endl;
	}

	return 0;
}