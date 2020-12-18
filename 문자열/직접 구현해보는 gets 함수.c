#include <stdio.h>


int main(void)
{
	char str[80];		

	my_gets(char* str[i]);

	return 0;
}

void my_gets(char* ps)		// ps는 첫 번째 배열 요소를 가리킨다.
{
	char ch;

	while ((ch = getchar() != '\n'))		// 입력한 문자가 개행문자가 아닌동안 반복
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}
