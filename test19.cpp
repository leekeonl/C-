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
		int n = low + (rand() % range);// low 와 high 사이의 랜덤 정수를 리턴한다.
		if (n % 2 == 0) return n;
	
	}

	
}



int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 까지의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "10 까지의 랜덤 정수 10개 --" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;


}