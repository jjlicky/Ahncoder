#include <stdio.h>

struct marriage
{
	char name[20];
	int age;
	char sex;
	double height;
};

int main(void)
{
	struct marriage m1 = { "Andy", 22, 'm',187.5 };
	struct marriage* mp = &m1;

	printf("%s %d %c %.1lf", mp->name, mp->age, mp->sex, mp->height);
	return 0;
}