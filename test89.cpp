#include<iostream>
using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "Base 家戈磊 角青 " << endl;
	}

};

class Derived : public Base {
public:
	virtual ~Derived() {
		cout << "Derived 家戈磊 角青 " << endl;
	}
};

int main() {
	Base *p = new Derived();
	delete p;

}