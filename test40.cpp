#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1;  }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius;  }

};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // ��ü tmp�� �����Ѵ�. tmp ��ü�� ���纻�� ����

}

int main() {
	Circle c; // ��ü�� �����ȴ� raidus = 1 �� �ʱ�ȭ �ȴ�
	cout << c.getArea() << endl;
	
	c = getCircle(); // tmp ��ü�� c �� �����
	cout << c.getArea() << endl;
}