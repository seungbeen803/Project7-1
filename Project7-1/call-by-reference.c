#include<stdio.h>
//�迭=������
void increment(int* i) {
	++* i;
}
void main(void) {
	int a = 0;
	printf("%d\n", a); //0
	increment(&a);
	printf("%d\n", a); //1

	system("pause");
}