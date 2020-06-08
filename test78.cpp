#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "생성자 A " << endl;

	}
	A(int x) {
		cout << "매개 변수 생성자 A" << x << endl;

	}

};

class B :public A {
public:
	B() 
	{ cout << "생성자 B " << endl; }
	//B(int x):A(x+3)
	//{ cout << "매개변수 생성자 B" << x << endl; }
	B(int x)
	{
		A(x + 3);					//기본 변수도 실행됨
		cout << "매개변수 생성자 B" << x << endl;
	}

};

int main() {
	B b(5);
}
