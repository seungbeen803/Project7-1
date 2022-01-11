#include<stdio.h>

void main(void)
{
	char ch;
	while (1)
	{
		ch = getchar(); //한글자 입력을 받는다
		if (ch == 'z') break;
		putchar(ch); //출력
	}
	system("pause");
}