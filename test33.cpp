#include <iostream>
#include <string>
using namespace std;

int main() {
	//��Ʈ�� ����
	string str; // �� ���ڿ��� ���� ��Ʈ�� ��ü ����
	string address("����� ���ϱ� �Ｚ�� 389");
	string copyAddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����

	char text[] = { 'L', 'O', 'v', 'e', ',', 'C', '+', '+', '\0' }; // c-��Ʈ��
	string title(text); // "love C++" ���ڿ��� ���� ��Ʈ�� ����

	//��Ʈ�� ���
	cout << str << endl; //�� ��Ʈ�� �ƹ��͵� ��µ��� ����
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;

}