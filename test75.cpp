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
	ColorPoint *pDer;

	Point *pBase = &cp;  // 업 캐스팅
	cout << pBase << endl; 
	pBase->set(3, 4);		//기본 클래스의 맴버 호출
	pBase->showPoint();

	pDer = (ColorPoint *)pBase;			// 다운 캐스팅 // int a, (double)a, a(4byte)

	cout << pDer << endl;
	pDer->setCoolor("Red");
	pDer->showColorPoint();
	pDer->showPoint();

	//pBase->showColorpoint() ; // 파생 클래스의 멤버 호출
	pBase->showPoint();

}