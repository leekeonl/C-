#include <iostream>

double area(int r); // 함수 선언



int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << false << std::endl;
	std::cout << "n+5=" << n + 5 << '\n';
	std::cout << "면적은" << area(n) << std::endl;

		


	return 0;
}

double area(int r) { // call by value

	return 3.14*r*r;
}