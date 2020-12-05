#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;			// 변수 선언과 초기화
	double avg;							// 평균을 저장할 변수
	int* pa, * pb;						// 포인터 동시 선언
	int* pt = &total;					// 포인터 선언과 초기화
	double* pg = &avg;					// double형 포인터 선언과 초기화
	
	pa = &a;		// 포인터에 a의 주소 대입
	pb = &b;		// 포인터에 b의 주소 대입

	*pt = *pa + *pb;	// 포인터를 이용하여 total에 a와 b를 더한값을 저장
	*pg = *pt / 2.0;


	printf("두 정수의 값 : %d, %d\n", *pa, *pb);			
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);


	return 0;
}