#include <iostream>
using namespace std;



class Shape;

void Paint(Shape *p);

class Shape {
public:
	//protected 쓰면 안됨 (외부에서 이미 선언 했기 때문)
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
		cout << "Circle을 그린다" << endl; }
	
};

class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rect를 그린다 " << endl;
	}
};

class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line을 그린다 " << endl;
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


