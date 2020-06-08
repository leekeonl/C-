#include <iostream>
#include <string>
using namespace std;

class Point {		//2차원 평면에서 하 점을 표현하는 클래스 point 선언
	
	int x, y;		//한점 (x,y) 좌표값
public:
	Point() { cout << this << endl; }
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
	ColorPoint() { cout << this << endl};
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
	Point p;
	//p.showPoint(); 자식것은 사용 불가능

	ColorPoint cp; //파생 클래스의 객체 생성
	cp.set(3., 4); // 기본 클래스의 맴버 호출
	cp.setCoolor("Red"); //파생 클래스의 맴버 호출
	cp.showColorPoint(); //파생 클래스의 멤버 호출
	//cp.x = 200; //private은 사용 불가


}