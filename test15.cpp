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

int main() {
	Circle donut;
	Circle pizza(30);

	return 0;

}