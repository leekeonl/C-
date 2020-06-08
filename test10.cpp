#include<iostream>
#include<string>
using namespace std;

int main() {
	char q[100], w[100], e[100];

	cout << "이름은? ";
	cin.getline(q, 100, '\n');

	
	cout << "주소는? ";
	cin.getline(w, 100, '\n');

	cout << "나이는? ";
	cin.getline(e, 100, '\n');

	cout << q << "," << w << "," << e <<"세" << endl; 
}