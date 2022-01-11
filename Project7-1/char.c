#include<stdio.h>

void main(void) {
	char ch[6] = { 'K', 'O', 'R', 'E', 'A' };
	char* ptr;
	ptr = ch;
	for (int i = 0; i < 6; i++) {
		//printf("%c \t", ch[i]);
		//printf("%c\t", *(ch + i));
		printf("%c\t", *(ptr + i));
	}
	system("pause");
}