#include <stdio.h>

int main(void)
{
	int a;
	char ch;
	scanf("%d", &a);
	fflush(stdin);

	scanf("%c", &ch);
	fflush(stdin);
	printf("%d %c \n", a, ch);
	
	return 0;
}

