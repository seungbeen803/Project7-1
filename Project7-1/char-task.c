#include<stdio.h>

void main(void)
{
	//������ ����
	//������ �迭�� ���ڿ� ǥ��
	char* ptr[5] = { "Computer", "Deak", "Books", "USB", "EXIT" };
	for (int i = 0; i < 5; i++)
	{
		//printf("%s\n", *(ptr + i));
		printf("%s\n", ptr[i]);
	}


	//����
	//char task[5][10] = { "Computer", "Deak", "Books", "USB", "EXIT" };
	//for (int i = 0; i < 5; i++)
	//{
		//printf("%s\n", task[i]);
		//printf("%s\n", *(task+i));
	//}
	system("pause");
}