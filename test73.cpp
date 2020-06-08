#include <iostream>
#include <string>
using namespace std;

class Point {		//2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� point ����
	
	int x, y;		//���� (x,y) ��ǥ��
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

class ColorPoint : public Point {// 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� colorPoint
	string color; // ���� ���� ǥ��
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
	//p.showPoint(); �ڽİ��� ��� �Ұ���

	ColorPoint cp; //�Ļ� Ŭ������ ��ü ����
	cp.set(3., 4); // �⺻ Ŭ������ �ɹ� ȣ��
	cp.setCoolor("Red"); //�Ļ� Ŭ������ �ɹ� ȣ��
	cp.showColorPoint(); //�Ļ� Ŭ������ ��� ȣ��
	//cp.x = 200; //private�� ��� �Ұ�


}