#include<iostream>
#include<string>
using namespace std;

int main() {
	char q[100], w[100], e[100];

	cout << "�̸���? ";
	cin.getline(q, 100, '\n');

	
	cout << "�ּҴ�? ";
	cin.getline(w, 100, '\n');

	cout << "���̴�? ";
	cin.getline(e, 100, '\n');

	cout << q << "," << w << "," << e <<"��" << endl; 
}