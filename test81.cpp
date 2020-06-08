#include <iostream>
using namespace std;

class BaseIO {
public:
	int mode;

};

class In : virtual public BaseIO {
public:
	int readPos;

};

class Out : virtual public BaseIO {
public:
	int writePos;

};

class InOut : public In, public Out {
public:
	bool safe;

};

int main() {
	InOut ioObj;
	ioObj.readPos = 10;
	ioObj.writePos = 20;
	ioObj.safe = true;
	ioObj.mode = 5;		//상속된곳이 같음 (다중상속의 문제) (겹쳐서 문제)
						// public 앞에 virtual 을 붙여주자


	cout << ioObj.readPos << endl;
	cout << ioObj.writePos << endl;
	cout << ioObj.safe << endl;
	cout << ioObj.mode << endl;
}