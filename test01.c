#include <stdio.h>

int main() {

	int *p; //������ ����(�ּҸ� ���� ����), �ش�Ǵ� �ּҸ� ����Ų��
	int a = 100;
	printf("%d %x\n", a, &a); //& : �ּ� ������(�����ּ�)
	a = 200;
	printf("%d\n", a);


	p=&a;	//		�޸� ����	= �� (��� ��Ģ)
	*p = *p + 100;
	printf("%d\n",a);
	return 0;
}