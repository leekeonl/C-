#include <iostream>
#include <string>
using namespace std;


int main() {
	string song("Falling in love with you"); // ���ڿ� song 
	string elvis("Elvis Presely"); // ���ڿ� Elvis
	string singer; // ���ڿ� Singer

	cout << song + "�� �θ� ������"; // +�� ���ڿ� ����
	cout << "(��Ʈ: ù���ڴ� " << elvis[0] << ")?";

	getline(cin, singer); // ���� ���� ���ڿ� �Է� ��ġ
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�";
	else
		cout << "Ʋ�Ƚ��ϴ�" + elvis + " �Դϴ�." << endl; // + ���ڷ� ����

}