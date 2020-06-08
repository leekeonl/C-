#include <iostream>
using namespace std;

class Person {
public:
	double money;//개인소유의 돈
	void addMoney(int money) {
		this->money += money;

	}
	static int sharedMoney; // 공금
	static void addShared(int n) {
		sharedMoney += n;

	}


};

// static 변수의 공간 할당
// int Person:: money = 10;  // 10로 초기화 (x)
int Person::sharedMoney = 10;

int main() {
	//Person :: sharedMoney = 200; // static 멤버 접근, 공금 = 200
	Person han;
	han.money = 100; //han 개인 돈 = 100
	han.sharedMoney = 200;
	cout << han.sharedMoney << endl;

	Person lee;
	lee.money = 150; // 개인의 돈 = 100
	lee.addMoney(200); // 개인의 돈 = 350
	lee.addShared(200); // static 멤버 접근, 공금 = 400
	//Person::addshared (200);
	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;

}