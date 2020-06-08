#include <iostream>
using namespace std;

class Abc {
public:
	int a = 100;
	//statcic a = 100; (x)
	Abc() {}
	Abc(int a) {
		this->a = a;
	}

};

int main() {
	Abc a;
	cout << a.a << endl;
	Abc b(30);
	cout << b.a << endl;
}