#include <iostream>
using namespace std;


class A {
public:
	A() {} // 없으면 에러
	A(int x) { cout << "매개변수 생성자 A" << endl; }

	~A() { cout << "소멸자 A" << endl; }



};

class B : public A {
public:

	B() {
	A();		// 호출하도록 컴파일됨	
		cout << " 생성자 B" << endl;
	}
	~B() { cout << "소멸자 B " << endl;
	}


};

class C : public B {
public:

	// B();
	C() { 
		cout << "생성자 C " << endl; }
	~C() {
		cout << "소멸자 C " << endl;
	}
};

int main() {
	C c; // 객체c 생성;
	return 0; // 객체 c 소멸
}