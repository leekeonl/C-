#include <iostream>
using namespace std;

class CMyData {

public:
	CMyData(int nParm) {
		m_pnData = new int;
		*m_pnData = nParm;

	}
	//복사 생성자 선언 및 정이
	CMyData(const CMyData &rhs) {
		cout << "CMyData(const CMyData &)" << endl;

		m_pnData = new int;	// 메모리 할당
		*m_pnData = *rhs.m_pnData;		//포인터가 가리키는 위치에 값을 복사한다
	}

	~CMyData() {
		delete m_pnData;
	}

	//대입 연산자 함수
	CMyData& operator = (const CMyData &rhs) {
		return *this;
	}

	int GetData() {
		if (m_pnData != NULL)
			return *m_pnData;

		return 0;

	}

private:
	int *m_pnData = nullptr;


};

int main() {
	CMyData a(10);
	CMyData b(20);

	a = b;
	cout << a.GetData() << endl;

	return 0;

}