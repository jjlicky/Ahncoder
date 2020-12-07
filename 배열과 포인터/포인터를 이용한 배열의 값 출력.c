#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;					// 포인터에 배열명 저장
	int i;							// 반복 제어 변수

	printf("배열의 값 : ");						
	for (i = 0; i < 3; i++)
	{
		printf("%5d", *pa);		// pa가 가리키는 배열 요소 출력
		pa++;					// 다음 배열 요소를 가리키도록 pa값 증가
	}
	
	return 0;
}