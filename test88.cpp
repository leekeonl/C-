#include<iostream>
using namespace std;

class Base {
public:
	~Base() {
		cout << "Base �Ҹ��� ���� " << endl;
	}

};

class Derived : public Base {
public:
	~Derived() {
		cout << "Derived �Ҹ��� ���� " << endl;
	}
};

int main() {
	Base *p = new Derived();
	delete p;

}