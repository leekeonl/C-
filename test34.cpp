#include <iostream>
#include <string>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n) { // 생성자
		size = n;
		p = new int[n]; //n개 정수 배열의 동적 생성
	}
	void read();  // 동적 할당받은 정수 배열 p 에 사용자로부터 정수를 입력 받음
	void write(); // 정수 배열을 화면에 출력
	int big(); // 정수 배열에서 가장 큰수 리턴
	~Sample(); // 소멸자
};

void Sample::read() {
	for (int i = 0; i < 10; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}

int Sample::big() {
	int b = p[0];
	for (int i = 0; i < size; i++)
			if (b < p[i]) b = p[i];
			return b;

	}



Sample :: ~Sample() {
	delete[] p;
}

int main() {
	Sample s(10); //10개 정수 배열을 가진 Sample 객체 생성
	s.read(); //키보드에서 정수 배열 읽기
	s.write(); // 정수 배열 출력
	cout << "가장 큰수는 " << s.big() << endl; // 가장큰수 출력 
}


