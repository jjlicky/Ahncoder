#include <stdio.h>

struct student
{
	int num;
	double grade;
};
int main(void)
{
	struct student a;

	a.num = 2;
	a.grade = 2.7;
	printf("�й� : %d\n", a.num);
	printf("���� : %.1lf\n", a.grade);

	return 0;
}

