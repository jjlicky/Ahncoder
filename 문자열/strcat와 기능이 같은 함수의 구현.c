#include <stdio.h>

char* my_strcat(char* pd, char* ps);		// �Լ� ����

int main(void)
{
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcat(str, "apple");				// ���ڿ� "apple" ����
	printf("�ٲ� �� ���ڿ� : %s\n", str);


	return 0;
}

char* my_strcat(char* pd, char* ps)			// ���� ������(pd)�� ������ ��(ps)�� ������
{
	char* po = pd;							// pd ���� ���߿� ��ȯ�ϱ� ���� ����

	while (*pd != '\0')
	{
		pd++;
	}
	while (*ps != '\0')						// ps�� ����Ű�� ���ڰ� �� ���ڰ� �ƴ� ����
	{
		*pd = *ps;							// ps�� ����Ű�� ���ڸ� pd�� ����Ű�� ��ġ�� ����
		pd++;								// ���� ���� ������ġ�� ������ ����
		ps++;								// ������ ���� ������ ��ġ�� ������ ����
	}
	*pd = '\0';								// ���簡 ��� ���� �� ���� ���� ���� �� ���ڷ� ������

	return po;
}


