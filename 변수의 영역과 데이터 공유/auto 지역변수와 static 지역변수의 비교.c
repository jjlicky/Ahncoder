#include <stdio.h>

void auto_func(void);
void static_func(void);


int main(void)
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}
	
	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);				// auto 지역변수는 반환할 때마다 할당된 메모리공간이 사라지므로 변수를 새로 선언
}

void static_func(void)
{
	static int a = 0;

	a++;
	printf("%d\n", a);				// static은 함수호출시 전역변수역할. 메모리공간이 사라지지않음. 변수를 새로 선언하지 않는다.
}