#include <stdio.h>

void assign10(void);
void assign20(void);

int a;

int main(void)
{
	printf("함수 호출 전 a 값 : %d\n", a);
	
	assign10();
	printf("함수 호출 후 a 값 : %d\n", a);		// 함수가 전역변수 a를 사용하여 10이 출력됨
	assign20();						
	printf("함수 호출 후 a 값 : %d\n", a);		// 함수내에 인수를 호출하였으나 다른블럭이므로 전역변수를 사용하여 그대로 10 출력
	
	return 0;
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;
	a = 20;
}