#include <iostream>
using namespace std;

class Person {
public:
	double money;//���μ����� ��
	void addMoney(int money) {
		this->money += money;

	}
	static int sharedMoney; // ����
	static void addShared(int n) {
		sharedMoney += n;

	}


};

// static ������ ���� �Ҵ�
// int Person:: money = 10;  // 10�� �ʱ�ȭ (x)
int Person::sharedMoney = 10;

int main() {
	//Person :: sharedMoney = 200; // static ��� ����, ���� = 200
	Person han;
	han.money = 100; //han ���� �� = 100
	han.sharedMoney = 200;
	cout << han.sharedMoney << endl;

	Person lee;
	lee.money = 150; // ������ �� = 100
	lee.addMoney(200); // ������ �� = 350
	lee.addShared(200); // static ��� ����, ���� = 400
	//Person::addshared (200);
	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;

}