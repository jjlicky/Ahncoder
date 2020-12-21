#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int *resp;

	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);	// resp가 가리키는 변수값 출력

	return 0;
}

int *sum(int a, int b)		//int형 변수의 주소를 반환하므로 int
{
	static int res;			// static을 사용하여 할당된 주소가 날아가는것을 방지시킴

	res = a + b;
	
	return &res;		// 지역변수의 주소를 반환
}