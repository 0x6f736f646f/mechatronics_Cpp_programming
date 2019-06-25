#include <iostream>

using namespace std;

void swap(int, int);

int main(){
	int a = 100, b = 200;
	cout << "Before swap\na = " << a << "\nb = " << b << endl; 
	swap(a,b);
	cout << "\nAfter swap\na = " << a << "\nb = " << b << endl; 
	return 0;
}
void swap(int x, int y){
	x = x + y;
	y = x - y;
	x = x - y;
	return;
}