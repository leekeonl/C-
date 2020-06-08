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
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}