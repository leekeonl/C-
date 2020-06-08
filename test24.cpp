#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() { a = 100; cout << a << ' '; }
	Sample(int x) { a = x; cout << a << ' '; }
	Sample(int x, int y) { a = x*y; cout << a << ' '; }
	int get() { return a;}
};

int main() {
	Sample arr[3];

	cout << endl;

	Sample arr2D[2][2] = { {Sample(2,3), Sample(2,4)}, {Sample(5),Sample()} };

	cout << endl;

	Sample *p = arr;

	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += p->get();
		p++;
	}
	cout << endl;
	cout << "sum = " << sum << endl;

	sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum += arr2D[i][j].get();

		}
	}
	cout << "sum = " << sum << endl;

	
}

