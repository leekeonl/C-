#include<iostream>
using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "Base �Ҹ��� ���� " << endl;
	}

};

class Derived : public Base {
public:
	virtual ~Derived() {
		cout << "Derived �Ҹ��� ���� " << endl;
	}
};

int main() {
	Base *p = new Derived();
	delete p;

}