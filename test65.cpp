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
	// ���� �Լ��� Ȱ��
}


int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); //�迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b �� ������ ��� ���� �� ����
	cout << c << endl; //15
	cout << d << endl; //55


}