#include <stdio.h>
#include "student.h"

int main(void)
{
	Student a = { 315, "GD" };
	
	printf("id : %d, name : %s", a.num, a.name);

	return 0;
}