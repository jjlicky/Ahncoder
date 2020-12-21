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
// 같은 a지만 다른 지역변수로 다른주소에 할당됨