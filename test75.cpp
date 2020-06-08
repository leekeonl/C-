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
	ColorPoint *pDer;

	Point *pBase = &cp;  // �� ĳ����
	cout << pBase << endl; 
	pBase->set(3, 4);		//�⺻ Ŭ������ �ɹ� ȣ��
	pBase->showPoint();

	pDer = (ColorPoint *)pBase;			// �ٿ� ĳ���� // int a, (double)a, a(4byte)

	cout << pDer << endl;
	pDer->setCoolor("Red");
	pDer->showColorPoint();
	pDer->showPoint();

	//pBase->showColorpoint() ; // �Ļ� Ŭ������ ��� ȣ��
	pBase->showPoint();

}