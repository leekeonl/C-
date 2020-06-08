#include <iostream>
#include <string>
using namespace std;


int main() {
	string song("Falling in love with you"); // 문자열 song 
	string elvis("Elvis Presely"); // 문자열 Elvis
	string singer; // 문자열 Singer

	cout << song + "를 부른 가수는"; // +로 문자열 연결
	cout << "(힌트: 첫글자는 " << elvis[0] << ")?";

	getline(cin, singer); // 공백 포함 문자열 입력 장치
	if (singer == elvis)
		cout << "맞았습니다";
	else
		cout << "틀렸습니다" + elvis + " 입니다." << endl; // + 문자로 연결

}