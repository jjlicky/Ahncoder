#include <stdio.h>

void assign(void);

int main(void)
{
	auto int a = 0;
	printf("%d", a);
	assign();
	printf("%d", a);
}

void assign(void)
{
	int a;
	a = 10;
}
// ���� a���� �ٸ� ���������� �ٸ��ּҿ� �Ҵ��