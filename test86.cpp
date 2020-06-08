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
	Shape *pShape = new Circle (); // 여기서 shape 을 call 해서 첫번째 함수만 실행
	pShape->paint();
	delete pShape;

}