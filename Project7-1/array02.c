#include<stdio.h>

int arraySum(int* score, int size) {
	printf("��÷�� ���մϴ�.\n");
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += *(score + i);
	}
	return total;
}
void main(void) {
	int score[] = { 90, 95, 100, 70, 81 };
	int result;
	result = arraySum(&score, 5);
	printf("������ %d", result);
	system("pause");
}