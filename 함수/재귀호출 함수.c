#include <stdio.h>

void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)		// 재귀호출 함수 정의
{
	printf("apple\n");
	fruit();		// 자신을 다시 호출
}