#include <iostream>
using namespace std;


class Tower {
public:
	int height;
	Tower();
	Tower(int r);
	int getHeight();
};

int Tower::getHeight() {
	if (height == 1) {
		return 1;
	}
	if (height == 100) {
		return 100;
	}
}

Tower::Tower() {
	height = 1;
}

Tower::Tower(int r) {
	height = 100;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}