#include <iostream>
using namespace std;

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() {
		cout << "shape :: draw() called " << endl;

	}
};


class Circle :public Shape {
public:
	virtual void draw() {
		cout << " Circle::draw() called " << endl;
	}
};
int main() {
	Shape *pShape = new Circle (); // ���⼭ shape �� call �ؼ� ù��° �Լ��� ����
	pShape->paint();
	delete pShape;

}