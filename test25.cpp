#include <iostream>
using namespace std;

int main() {
	int *p;

	p = new int;
	cout << p << endl; 
	if (!p) {
		cout << "메모리를 할당할수 없슴당";
		return 0;

	}
	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;		//주소는 그대로 살아있다
	cout << p << endl;
}