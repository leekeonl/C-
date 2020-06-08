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
	Power operator++(int x); // 전위 후위 구분 // 매개변수는 구별 용도일뿐

};


void Power::show() {
	cout << "kick = " << kick << ',' << "punch = " << punch << endl;

}
Power Power::operator++(int x) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;

}


int main() {
	Power a(3, 5), b;

	a.show();
	b.show();
	b = a++; //b = a.+(2)
	a.show();
	b.show();
}