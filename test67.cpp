#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {	//디폴트 매게 변수
		this->kick = kick;
		this->punch = punch;

	}
	void show();
	Power operator+(Power op2); // 연산자 함수 선언

};

void Power::show() {
	cout << "kick = " << kick  << ',' << "punch = " << punch << endl;

}

Power Power::operator+(Power op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;

}

int main() {
	Power a(3, 5), b(4, 6), c;
	//c = a + b;		//c= a.+ (b); (x) 이런식으로 처리함
	c = a.operator+(b);
	a.show();
	b.show();
	c.show();

}