#include <iostream>
using namespace std;

class Abc {
public:
	int a;
	static int b;	//객체를 아무리 많이 만들어도 딱 하나만 생성됨 
	// 메모리에 로딩될때 제일 먼저 만들어 진다.
	// 공유된다. 
	// 객체 생성과 상관 없다. 
	// 클래스 안에 있고 객체 생성가 관련이 없으므로 클래스 멤버라 부른다.
	Abc() {
		a = 0;

	}

};


int Abc::b = 0; // static 초기화
//int Abc::a = 0; :에러나는 이유 -> 객체가 만들어져야 사용할수 있기 때문

int main() {


	//cout << Abc::a << endl;
	cout << Abc::b << endl;

	Abc a;
	Abc b;
	Abc c;

	cout << a.a << endl;
	cout << b.b << endl;


	a.a = 100;
	a.b = a.b + 100;
	cout << a.b << endl;
	b.a = 200;
	b.b = b.b + 200;
	cout << b.b << endl;
	c.a = 300;
	c.b = c.b + 300;
	cout << c.b << endl;

	cout << a.a << ' ' << a.b << ' ' << b.a << ' ' << b.b << ' ' << c.a << ' ' << c.b << ' ' << endl;

	Abc::b = 400;
	cout << Abc::b << endl;
	Abc::b = 500;
	cout << Abc::b << endl;

}