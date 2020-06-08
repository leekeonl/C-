#include<iostream>
#include<string>

using namespace std;

int main() {
	int q;
	int w;

	cout << "두 수를 입력하라>>";
	cin >> q >> w;

	if (q > w)
		cout << "q 가 큰 수 = " << q << endl;
	else
		cout << " w 가 큰 수 = " << w << endl;

}