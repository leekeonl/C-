#include <iostream>
using namespace std; 

void swap(int a, int b);

int main() {
	int a = 10, b = 20;
	swap(a, b);			//call by value
	cout << a << ' ' << b << endl; 
}

void swap(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "swap = " <<  a << ' ' << b << endl;


}