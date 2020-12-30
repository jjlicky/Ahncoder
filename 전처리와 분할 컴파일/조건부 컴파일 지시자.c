#include <stdio.h>
#define VER 7
#define BIT16


int main(void)
{
	int max;

#if VER >= 6
	printf("It is version %d.\n", VER);
#endif

#ifdef BIT16
	max = 32767;
#else
	max = 2131241;
#endif

	printf("Maximum value of int variable : %d\n", max);

	return 0;
}
