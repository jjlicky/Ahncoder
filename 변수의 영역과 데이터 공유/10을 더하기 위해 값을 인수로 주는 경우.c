#include <stdio.h>

int add_ten(int a);

int main(void)
{
	int a = 10;

	a=add_ten(a);				//��ȯ���� �ޱ����� a�� ���� ����
	printf("a: %d\n", a);

	return 0;
}

int add_ten(int a)	 // ��ȯ���� ���� �����ؾ��ϹǷ� int������
{
	a += 10;
	return a;		// ������ ������ �Ҵ��� a�� 10�� ���Ѱ��� return���ش�.
}