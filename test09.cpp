#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char q[100];
	char w[100];

	cout << "새 암호를 입력해라>>";
	cin >> q;

	cout << "새 암호를 다시 입력해라>>";
	cin >> w; 

	if (strcmp(q, w) == 0)
		cout << "같습니다" << endl;
	else
		cout << "틀립니다" << endl; 
}