#include <stdio.h>

void swap(void);			// 두 변수의 값을 바꾸는 함수의 선언

int main(void)
{
	int a = 10, b = 20;;				// 변수 선언과 초기화
	
	swap();								// 인수 없이 함수 호출
	printf("a:%d, b:%d\n", a, b);		// 변수 a, b 출력
	
	return 0;
}

void swap(void)				// 매개변수로 포인터 선언
{
	int temp;							// 교환을 위한 임시 변수

	temp = a;							// temp에 pa가 가리키는 변수의 값 저장
	a = b;							// pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
	b = temp;							// pb가 가리키는 변수에 temp 값 저장
}