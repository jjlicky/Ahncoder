#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit();			

	return 0;
}

void fruit(void)		// ���ȣ�� �Լ� ����
{
	printf("apple\n");
	fruit();		// �ڽ��� �ٽ� ȣ��
}