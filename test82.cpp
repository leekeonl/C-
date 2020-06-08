#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {	// virtual을 붙일시 자식것이 실행
		cout << " Base :: f() called " << endl;

	}

};

class Derived : public Base {	// 자식것이 실행됨
public:
	virtual void f() {	// function writing ( overidding 함수명& 반환타입 동일, 내용 상관 x)
		cout << " Derived :: f() called " << endl;

	}
};

void main() {
	Derived d, *pDer;
	pDer = &d;
	pDer->f();

	Base *pBase;	// 부모 타입이기 때문에 부모의 f() 가 호출
	pBase = pDer;	// 업캐스팅 -> 부모 우선
	pBase->f();

}