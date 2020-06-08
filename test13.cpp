#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //컴파일러가 자동으로 생성
	Circle(int r);
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
	cout << "반지름" << radius << "원 생성" << endl; 
}

int main() {
	Circle donut;		//매개 변수 없는 생성자 자동 호출 100%
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}