#include <stdio.h>

int add_ten(int a);

int main(void)
{
	int a = 10;

	a=add_ten(a);				//반환값을 받기위해 a에 직접 저장
	printf("a: %d\n", a);

	return 0;
}

int add_ten(int a)	 // 반환값을 직접 적용해야하므로 int형으로
{
	a += 10;
	return a;		// 독립된 공간에 할당한 a에 10을 더한값을 return해준다.
}