#include <iostream>
#include <string>
using namespace std;

class Point {		//2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� point ����

	int x, y;		//���� (x,y) ��ǥ��
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;

	}
	void showPoint() {
		cout << " (" << x << "," << y << ")" << endl;

	}

};

class ColorPoint : public Point {// 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� colorPoint
	string color; // ���� ���� ǥ��
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
	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cout << &cp << endl;
	ColorPoint *pDer = &cp;
	cout << pDer << endl;
	Point *pBase = pDer; // �� ĳ��Ʈ
	cout << pBase << endl;
	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setCoolor("RED");
	pDer->showColorPoint();
}