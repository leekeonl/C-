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
	ioObj.mode = 5;		//��ӵȰ��� ���� (���߻���� ����) (���ļ� ����)
						// public �տ� virtual �� �ٿ�����


	cout << ioObj.readPos << endl;
	cout << ioObj.writePos << endl;
	cout << ioObj.safe << endl;
	cout << ioObj.mode << endl;
}