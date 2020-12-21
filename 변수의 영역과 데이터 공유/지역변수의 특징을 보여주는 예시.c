#include <stdio.h>


int main(void)
{
	int a = 10;
	printf("%d", a);
	{
		int a = 20;
		{
			a++;
		}
		printf("%d", a);
	}
	printf("%d", a);
}
