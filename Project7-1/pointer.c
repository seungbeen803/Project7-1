#include<stdio.h>
#define SIZE 10
//�����͵� �迭������ ÷�ڷ� ������ ����
main() {
	int  mya[] = { 10, 20, 30, 40, 50 };
	int* p;
	p = mya;
	printf("mya[0]=%d mya[1]=%d mya[2]=%d\n", mya[0], mya[1], mya[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);

	system("pause");
}