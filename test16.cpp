#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //�����Ϸ��� �ڵ����� ����
	Circle(int r);
	~Circle();
	double getArea();
};


double Circle::getArea() {
	return 3.14*radius*radius;
}


Circle::Circle() {		//������
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r) {		//������
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();

}