#include <iostream>			//[] 안에 글씨 찾기
using namespace std;

char& find(char s[], int index) {
	return s[index]; // 참조 리턴
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] 을 S로 변경
	cout << name << endl;

	char &ref = find(name, 2);
	ref = 't'; //name 은 이제 site
	cout << name << endl;

	char cha = find(name, 3);
	cout << cha << endl;
}
