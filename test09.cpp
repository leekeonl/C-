#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char q[100];
	char w[100];

	cout << "�� ��ȣ�� �Է��ض�>>";
	cin >> q;

	cout << "�� ��ȣ�� �ٽ� �Է��ض�>>";
	cin >> w; 

	if (strcmp(q, w) == 0)
		cout << "�����ϴ�" << endl;
	else
		cout << "Ʋ���ϴ�" << endl; 
}