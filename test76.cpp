#include <iostream>
using namespace std;


class A {
public:
	A() {} // ������ ����
	A(int x) { cout << "�Ű����� ������ A" << endl; }

	~A() { cout << "�Ҹ��� A" << endl; }



};

class B : public A {
public:

	B() {
	A();		// ȣ���ϵ��� �����ϵ�	
		cout << " ������ B" << endl;
	}
	~B() { cout << "�Ҹ��� B " << endl;
	}


};

class C : public B {
public:

	// B();
	C() { 
		cout << "������ C " << endl; }
	~C() {
		cout << "�Ҹ��� C " << endl;
	}
};

int main() {
	C c; // ��üc ����;
	return 0; // ��ü c �Ҹ�
}