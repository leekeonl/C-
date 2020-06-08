#include <iostream>
using namespace std;



class Shape;

void Paint(Shape *p);

class Shape {
public:
	//protected ���� �ȵ� (�ܺο��� �̹� ���� �߱� ����)
	virtual void draw() {};
};

//class Shape {
//
//protected:
//	virtual void draw() {}
//	void Paint(Shape *p);
//
//};

class Circle : public Shape {
protected:
	virtual void draw() { 
		cout << "Circle�� �׸���" << endl; }
	
};

class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rect�� �׸��� " << endl;
	}
};

class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line�� �׸��� " << endl;
	}
};


void Paint(Shape* p) {
		p->draw();
	}


int main() {

	Paint(new Circle());
	Paint(new Rect());
	Paint(new Line());
}


