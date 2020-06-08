#include <iostream>
using namespace std;

class CMyData {
	
public:
	CMyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
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
	//CMyData b = a;
	CMyData b(a);
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}