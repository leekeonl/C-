#include <iostream>
#include <string>
using namespace std;

class Point {		//2차원 평면에서 하 점을 표현하는 클래스 point 선언

	int x, y;		//한점 (x,y) 좌표값
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;

	}
	void showPoint() {
		cout << " (" << x << "," << y << ")" << endl;

	}

};

class ColorPoint : public Point {// 2차원 평면에서 컬러 점을 표현하는 클래스 colorPoint
	string color; // 점의 색을 표현
public:
	//colorPoint() { cout << this << endl};
		void setCoolor(string color) {
		this->color = color;

	}
	void showColorPoint();
};


void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();

}

int main() {
	ColorPoint cp; // 파생 클래스의 객체 생성
	cout << &cp << endl;
	ColorPoint *pDer = &cp;
	cout << pDer << endl;
	Point *pBase = pDer; // 업 캐스트
	cout << pBase << endl;
	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setCoolor("RED");
	pDer->showColorPoint();
}