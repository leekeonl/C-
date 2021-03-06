#include <iostream>				//얕은복사 //깊은복사
#include <cstring>
using namespace std;


class Person {
	char *name;
	int id;

public:
	Person(int id, char *name);
	~Person();
	Person(Person &p);


	void changeName(char *name);
	void show() {
		cout << id << ',' << name << endl;

	}
};



Person::Person(Person &person) {				// 공간만들기 
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행, 원본 객체 이름 " << this->name << endl;


}


Person::Person(int id, char *name) {		//얕은 복사
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];		//null들어갈꺼까지 계산 해줘야된다
	strcpy(this->name, name);

}

Person::~Person() {
	if (name)
		delete[] name;

}

void Person::changeName(char *name) {
	if (strlen(name) > strlen(name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);		// daughter 객체 복사 생성, 이때 복사 생성자 호출

	cout << "daughter 객체 생성 직후 -----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경 후 -----" << endl;
	father.show();
	daughter.show();

	return 0;
}