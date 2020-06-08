#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
	Random(); //생성자, 랜덤 seed를 설정한다
	int next(); //랜덤 정수를 리턴한다
	int nextInRange(int low, int high); // low 와 high 사이의 랜덤 정수를 리턴한다
};


Random::Random() {
	srand((unsigned)time(0)); //임의의 seed를 성정하여 할 때마다 다른 랜덤 수가 나오게 한다

}

int Random::next(){
	return rand(); // 0에서 RAND_MAX 사이의 랜덤한 정수 리턴

}

int Random::nextInRange(int low, int high) {
	int range = (high - low) + 1;
	return low + (rand() % range); // low 와 high 사이의 랜덤 정수를 리턴한다.
}


int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 까지의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;


}