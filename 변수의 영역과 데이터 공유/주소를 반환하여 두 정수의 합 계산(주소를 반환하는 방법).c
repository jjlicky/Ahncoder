#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int *resp;

	resp = sum(10, 20);
	printf("�� ������ �� : %d\n", *resp);	// resp�� ����Ű�� ������ ���

	return 0;
}

int *sum(int a, int b)		//int�� ������ �ּҸ� ��ȯ�ϹǷ� int
{
	static int res;			// static�� ����Ͽ� �Ҵ�� �ּҰ� ���ư��°��� ������Ŵ

	res = a + b;
	
	return &res;		// ���������� �ּҸ� ��ȯ
}