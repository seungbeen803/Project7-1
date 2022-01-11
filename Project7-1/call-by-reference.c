#include<stdio.h>
//배열=포인터
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