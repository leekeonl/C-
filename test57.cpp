#include <iostream>
using namespace std;

int sum(int a=0, int b, int c) {
	return a + b + c;

}
int sum(int a, int b) {
	return a + b;

}

double sum(int a, int b) {		//��ȯŸ���� ���߹����̱⶧���� ������ ����
	return a + b;
}

double sum(double a, double b) {
	return a + b;

}



int main() {

	cout << sum(2, 5, 33) << endl;

	cout << sum(2, 6) << endl;


	cout << sum(12.5, 33.6) << endl;

}