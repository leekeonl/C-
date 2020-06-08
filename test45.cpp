#include <iostream>
using namespace std;

bool average(int a[], int size, int &avg){ 
	// 참조 매개변수 avg 에 평균값 전달
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	avg = sum / size;
	return true;

}

int main() {
	int x[] = { 0,1,2,3,4,5 };
	int avg;

	if (average(x, 6, avg)) cout << "평균은 " << avg << endl; 
	else cout << "매개변수 오류" << endl;

	//avg에 평균이 넘어오고, avegare()는 true리턴

	if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개변수 오류" << endl;

	//avg의 값은 의미없고, average() 는 false 리턴

}