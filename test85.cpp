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

int main() {
	Shape *pShape = new Shape();
	pShape->paint();
	delete pShape;
		
}