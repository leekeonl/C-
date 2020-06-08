#include<iostream>
using namespace std;

class PersonError {
public:

	static int money;
public:
	
	static int getMoney() {
		return money;

	}
	void setMoney(int money) {
		this->money = money;

	}
};

int PersonError::money = 100;

int main() {
	int n = PersonError::getMoney();

	PersonError errorkim;
	errorkim.setMoney(100);

}