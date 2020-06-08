#include <iostream>			//call by address
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }


};


Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}
void increaseCircle(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);

}
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);

}

void increase2(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}



int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

	increase2(waffle);
	cout << waffle.getRadius() << endl;
}