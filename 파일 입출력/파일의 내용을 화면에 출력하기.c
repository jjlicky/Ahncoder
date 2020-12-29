#include <stdio.h>


int main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("file didn't be opened");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;
}

