#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1;}

	Circle(int radius) { this->radius = radius; }  //c2의 객체를 나타냄

	void setRadius(int radius) { this->radius = radius; }

	void getWrite() {
		cout << radius << endl;		//아래 그것과 같다
		cout << this->radius << endl; //현재 객체에 있는 variable 
	}
};

int main() {
	Circle c1;
	Circle c2(2);
	Circle c3(3);

	c1.getWrite();
	c2.getWrite();
	c3.getWrite();

	cout << endl;

	c1.setRadius(4);
	c2.setRadius(5);
	c3.setRadius(6);

	c1.getWrite();
	c2.getWrite();
	c3.getWrite();

	//(클래스에서만 사용 가능) 매개변수와 객체변수가 이름이 같을때 객체에 있는 변수란걸 알려주기 위해서 this->를 쓴다
}	//주소 == 시작주소 (* 꼭 붙여야됨)
	//return this; 포인터 변수