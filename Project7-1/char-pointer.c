#include<stdio.h>

void main(void)
{
	int i;
	//char menu[5][10] = { "init", "open", "close", "read", "write" };
	char* ptr[5] = { "init", "open", "close", "read", "write" };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ��° �޴� = %s\n", i, ptr[i]);
	}
	system("pause");
}