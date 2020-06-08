#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;

	}
	void show();
	Power operator+(int op2); // 연산자 함수 선언

};


void Power::show() {
	cout << "kick = " << kick << ',' << "punch = " << punch << endl;

}
Power Power::operator+(int op2) {
	Power tmp;
	tmp.kick = this->kick + op2;
	tmp.punch = this->punch + op2;
	return tmp;
	//kick = kick + op2;
	//punch = punch + op2;
	////cout << this << *this << endl;
	//return *this;
}


int main() {
	Power a(3, 5), b(4, 6), c;

	a.show();
	b.show();
	b = a + 2; //b = a.+(2)
	a.show();
	b.show();
}