#include<stdio.h>

void main(void)
{

	char s[10];


	//scanf("%s", &s); //공백은 안됨
	gets(s); //공백을 포함할 수 있다.
	//printf("%s", s);
	puts(s);
	system("pause");
}