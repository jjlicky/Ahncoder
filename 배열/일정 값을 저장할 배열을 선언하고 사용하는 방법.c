#include <stdio.h>

int main(void)
{
	int ary[5];				// int�� ��� 5���� �迭 ����
	
	ary[0] = 10;			// ù��° �迭 ��ҿ� 10 ����
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];		// ù��°�� �ι�°��Ҹ� ���� ����° ��ҿ� ����
	scanf("%d", &ary[3]);	// Ű����� �Է¹޾� �׹�° ��ҿ� ����

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}