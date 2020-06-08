#include <iostream>
using namespace std;

class Base {
public:
	~Base() {
		cout << " ~Base() " << endl;

	}

};

class Derived : public Base {
public:
	~Derived() {
		cout << "~DEedrivded " << endl;
	}
};

int main() {
	Derived *dp = new Derived();
	Base *bp = new Derived();
	

	delete dp;
	delete bp;
}