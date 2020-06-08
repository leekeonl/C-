#include <iostream>
using namespace std; 

int main() {
	int a = 100;
	int &b = a;
	cout << b << ' ' << a << endl;
	b = b + 200;
	cout << b << ' '<< "a °¡ ¹Ù²ñ" << a << endl;


}