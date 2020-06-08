#include <iostream>
using namespace std;

class Circle {
public:
	int radius ;
	double getArea();

};

double Circle::getArea() {
	return 3.14*radius*radius;

}

int main() {
	Circle donut; // circle 타입의 donut 객체 변수
	donut.radius = 2;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;


	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은" << area << endl;

}
