#include<stdio.h>
#include<string.h>
void main(void)
{
	char s1[10];
	char s2[10];
	scanf("%s", s2);
	strcpy(s1, s2); //s2�� ������ s1�� �����
	printf("����� ������ %s\n", s1);

	system("pause");
}