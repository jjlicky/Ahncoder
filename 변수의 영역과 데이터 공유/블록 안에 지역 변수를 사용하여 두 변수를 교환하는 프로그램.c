#include <stdio.h>


int main(void)
{
	int a = 10, b=20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
	 int temp;

	 temp = a;
	 a = b;
	 b = temp;
	}					// {}안에서 선언된 temp는 블록을 벗어나면 메모리가 사라짐
	printf("교환 후 a와 b의 값 : %d, %d\n", a,b);
	return 0;
}