#include <stdio.h>

void swap(int x, int y);				// 두 변수의 값을 바꾸는 함수의 선언

int main(void)
{
	int a = 10, b = 20;;				// 변수 선언과 초기화
	
	swap(a, b);							// 인수 없이 함수 호출
	printf("a:%d, b:%d\n", a, b);		// 변수 a, b 출력
	
	return 0;
}

void swap(int x, int y)					// 인수 a, b의 값을 x, y에 복사해서 저장
{
	int temp;							// 교환을 위한 임시 변수

	temp = x;							// temp에 x값 저장
	x = y;								// x에 y 값 저장
	y = temp;							// y에 temp 값 저장
}