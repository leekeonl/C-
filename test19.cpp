#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int low, int high);

};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int q = rand();
	while (true) {
		int n = rand();
		if (n % 2 == 0) return n;
	}
}

int EvenRandom::nextInRange(int low, int high) {
	int range = (high - low) + 1;
	while (true) {
		int n = low + (rand() % range);// low �� high ������ ���� ������ �����Ѵ�.
		if (n % 2 == 0) return n;
	
	}

	
}



int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "10 ������ ���� ���� 10�� --" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;


}