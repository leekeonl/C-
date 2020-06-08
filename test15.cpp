#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //컴파일러가 자동으로 생성
	Circle(int r);
	~Circle();
	double getArea();
};


double Circle::getArea() {
	return 3.14*radius*radius;
}


Circle::Circle() {		//생성자
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) {		//생성자
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

int main() {
	Circle donut;
	Circle pizza(30);

	return 0;

}