#include <iostream>
using namespace std;

int main() {
	int *p;

	p = new int;
	cout << p << endl; 
	if (!p) {
		cout << "�޸𸮸� �Ҵ��Ҽ� ������";
		return 0;

	}
	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;		//�ּҴ� �״�� ����ִ�
	cout << p << endl;
}