#include <iostream>			//[] �ȿ� �۾� ã��
using namespace std;

char& find(char s[], int index) {
	return s[index]; // ���� ����
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] �� S�� ����
	cout << name << endl;

	char &ref = find(name, 2);
	ref = 't'; //name �� ���� site
	cout << name << endl;

	char cha = find(name, 3);
	cout << cha << endl;
}
