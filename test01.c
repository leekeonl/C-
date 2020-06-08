#include <stdio.h>

int main() {

	int *p; //포인터 변수(주소만 저장 가능), 해당되는 주소를 가리킨다
	int a = 100;
	printf("%d %x\n", a, &a); //& : 주소 연산자(시작주소)
	a = 200;
	printf("%d\n", a);


	p=&a;	//		메모리 공간	= 값 (언어 법칙)
	*p = *p + 100;
	printf("%d\n",a);
	return 0;
}