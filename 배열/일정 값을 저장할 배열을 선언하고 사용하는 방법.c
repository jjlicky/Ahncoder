#include <stdio.h>

int main(void)
{
	int ary[5];				// int형 요소 5개의 배열 선언
	
	ary[0] = 10;			// 첫번째 배열 요소에 10 대입
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];		// 첫번째와 두번째요소를 더해 세번째 요소에 저장
	scanf("%d", &ary[3]);	// 키보드로 입력받아 네번째 요소에 저장

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}