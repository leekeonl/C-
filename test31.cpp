#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1;}

	Circle(int radius) { this->radius = radius; }  //c2�� ��ü�� ��Ÿ��

	void setRadius(int radius) { this->radius = radius; }

	void getWrite() {
		cout << radius << endl;		//�Ʒ� �װͰ� ����
		cout << this->radius << endl; //���� ��ü�� �ִ� variable 
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

	//(Ŭ���������� ��� ����) �Ű������� ��ü������ �̸��� ������ ��ü�� �ִ� �������� �˷��ֱ� ���ؼ� this->�� ����
}	//�ּ� == �����ּ� (* �� �ٿ��ߵ�)
	//return this; ������ ����