#include <stdio.h>

void add_ten(int *pa);

int main(void)
{
	int a = 10;

	add_ten(&a);				//반환값을 받기위해 a에 직접 저장
	printf("a: %d\n", a);

	return 0;
}

void add_ten(int *pa)		//반환할 필요없으므로 void형으로, 대신 포인터를 사용해야하므로 간접참조연산자를 붙여줘야함.
{
	*pa = *pa + 10;
}