#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called " << endl; }

};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called " << endl; }

};

class GrandDerived : public Derived {
public:
	void f() { cout << "Grand Derived::f() Called " << endl; }

};

int main() {
	GrandDerived g;
	Base *bp;
	Derived *dp;
	GrandDerived *gp;

	bp = dp = gp = &g;

	bp->f();
	dp->f();
	gp->f();		//동적 바인딩에 의해 모두 GRandDerived의 함수 f() 가 호출

}