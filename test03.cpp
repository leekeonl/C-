#include <iostream>
using namespace std;

int main() {		//using namespace std; <- std:: 생략 하는법 ex.) cout << "hello"
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width; // 키보드로부터 입력
	cout << "높이를 입력하세요>>";

	int height;
	cin >> height; 
	//cin >> width >> height;
	int area = width * height;
	cout << "면적은" << area << "\n";


	return 0;

}