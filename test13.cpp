#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //�����Ϸ��� �ڵ����� ����
	Circle(int r);
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
	cout << "������" << radius << "�� ����" << endl; 
}

int main() {
	Circle donut;		//�Ű� ���� ���� ������ �ڵ� ȣ�� 100%
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}