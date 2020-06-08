#include <iostream>
using namespace std;

class CMyData {

public:
	CMyData(int nParm) {
		m_pnData = new int;
		*m_pnData = nParm;

	}
	//���� ������ ���� �� ����
	CMyData(const CMyData &rhs) {
		cout << "CMyData(const CMyData &)" << endl;

		m_pnData = new int;	// �޸� �Ҵ�
		*m_pnData = *rhs.m_pnData;		//�����Ͱ� ����Ű�� ��ġ�� ���� �����Ѵ�
	}

	~CMyData() {
		delete m_pnData;
	}

	//���� ������ �Լ�
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