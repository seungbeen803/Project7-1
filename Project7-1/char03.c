#include<stdio.h>

void main(void)
{
	char ch;
	while (1)
	{
		ch = getchar(); //�ѱ��� �Է��� �޴´�
		if (ch == 'z') break;
		putchar(ch); //���
	}
	system("pause");
}