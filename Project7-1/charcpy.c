#include<stdio.h>
#include<string.h>
void main(void)
{
	char s1[10];
	char s2[10];
	scanf("%s", s2);
	strcpy(s1, s2); //s2의 내용이 s1에 복사됨
	printf("복사된 내용은 %s\n", s1);

	system("pause");
}