#include <iostream>
using namespace std;

class Abc {
public:
	int a;
	static int b;	//��ü�� �ƹ��� ���� ���� �� �ϳ��� ������ 
	// �޸𸮿� �ε��ɶ� ���� ���� ����� ����.
	// �����ȴ�. 
	// ��ü ������ ��� ����. 
	// Ŭ���� �ȿ� �ְ� ��ü ������ ������ �����Ƿ� Ŭ���� ����� �θ���.
	Abc() {
		a = 0;

	}

};


int Abc::b = 0; // static �ʱ�ȭ
//int Abc::a = 0; :�������� ���� -> ��ü�� ��������� ����Ҽ� �ֱ� ����

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