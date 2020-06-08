#include <iostream>
using namespace std;
//1번이 틀림
/* 2.a) Sample &x = a
	b.)	Sample *y = &a
	c.) cout << x.show()
	b.) cout << y->show()
	*/



void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << a << ' ' << b << endl;

}

int main() {
	int m = 2, n = 9;
	swap(m, n);
	cout << m << ' ' << n << endl;

}