#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {	// virtual�� ���Ͻ� �ڽİ��� ����
		cout << " Base :: f() called " << endl;

	}

};

class Derived : public Base {	// �ڽİ��� �����
public:
	virtual void f() {	// function writing ( overidding �Լ���& ��ȯŸ�� ����, ���� ��� x)
		cout << " Derived :: f() called " << endl;

	}
};

void main() {
	Derived d, *pDer;
	pDer = &d;
	pDer->f();

	Base *pBase;	// �θ� Ÿ���̱� ������ �θ��� f() �� ȣ��
	pBase = pDer;	// ��ĳ���� -> �θ� �켱
	pBase->f();

}