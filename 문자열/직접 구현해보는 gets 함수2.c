#include <stdio.h>


int main(void)
{
	char str[80];		

	my_gets(char* str[i]);

	return 0;
}

void my_gets(char* ps)		// ps�� ù ��° �迭 ��Ҹ� ����Ų��.
{
	char ch;

	while ((ch = getchar() != '\n'))		// �Է��� ���ڰ� ���๮�ڰ� �ƴѵ��� �ݺ�
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}
