#include <iostream>
using namespace std;

int main() {		//using namespace std; <- std:: ���� �ϴ¹� ex.) cout << "hello"
	cout << "�ʺ� �Է��ϼ���>>";

	int width;
	cin >> width; // Ű����κ��� �Է�
	cout << "���̸� �Է��ϼ���>>";

	int height;
	cin >> height; 
	//cin >> width >> height;
	int area = width * height;
	cout << "������" << area << "\n";


	return 0;

}