#include <iostream>
using namespace std;

class A {
public:
	void f() {
		cout << "A::f()" << endl;

	}
	virtual void g() {
		cout << "A::g()" << endl;

	}
	~A() { cout << "~A() " << endl; }

};

class B :public A {
public:
	void f() { cout << "B::f() " << endl;}
	virtual void g() { cout << "B::g()" << endl; }
	~B() { cout << "~B()" << endl; }

};

int main() {
	B *q = new B();
	A *p = q;		//업캐스팅

	delete q;
	delete p; 
}


/*
1.) 4
2.) 중복으로 삭제해서 에러남


*/
