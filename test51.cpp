#include <iostream>
using namespace std;

class Circle {
private:
	int radius;

public:
	Circle(Circle &c);		//복사 생성자 선언

	Circle() {
		radius = 1;

	}
	Circle(int radius) {
		this->radius = radius;

	}
	double getArea() {
		return 3.14*radius*radius;

	}

};

Circle::Circle(Circle &c) {			//기본 복사 생성자
	this->radius = c.radius;		
		cout << "복사 생성자 실행 radius = " << radius << endl;

}


int main() {
	Circle src(30);
	Circle dest(src);		//객체 복사, 변수쪽에 집중

	cout << "원본의 면적 " << src.getArea() << endl;
	cout << "사본의 면적 " << dest.getArea() << endl;

}