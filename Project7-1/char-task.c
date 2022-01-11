#include<stdio.h>

void main(void)
{
	//포인터 변수
	//포인터 배열로 문자열 표현
	char* ptr[5] = { "Computer", "Deak", "Books", "USB", "EXIT" };
	for (int i = 0; i < 5; i++)
	{
		//printf("%s\n", *(ptr + i));
		printf("%s\n", ptr[i]);
	}


	//문자
	//char task[5][10] = { "Computer", "Deak", "Books", "USB", "EXIT" };
	//for (int i = 0; i < 5; i++)
	//{
		//printf("%s\n", task[i]);
		//printf("%s\n", *(task+i));
	//}
	system("pause");
}