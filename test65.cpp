#include <iostream>
using namespace std;




int add(int a[], int size) {
	int res = 0;
		for (int i = 0; i < size; i++)
			res += a[i];
	return res;

}

int add(int a[], int size, int b[]) {
	int res = 0;
	for (int i = 0; i < size; i++)
		res += a[i] + b[i];
	return res;
	

	// return add(x,size) + add(y,size);
	// 기존 함수를 활용
}


int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); //배열 a의 정수를 모두 더한 값 리턴
	int d = add(a, 5, b); // 배열 a와 b 의 정수를 모두 더한 값 리턴
	cout << c << endl; //15
	cout << d << endl; //55


}