#include <stdio.h>

void add_ten(int *pa);

int main(void)
{
	int a = 10;

	add_ten(&a);				//��ȯ���� �ޱ����� a�� ���� ����
	printf("a: %d\n", a);

	return 0;
}

void add_ten(int *pa)		//��ȯ�� �ʿ�����Ƿ� void������, ��� �����͸� ����ؾ��ϹǷ� �������������ڸ� �ٿ������.
{
	*pa = *pa + 10;
}