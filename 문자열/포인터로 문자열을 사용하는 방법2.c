#include <stdio.h>
int main(void)
{
	char* cp = "apple";
	printf("%s", cp);
	while (*cp != '\0')
	{
		printf("%s\n", cp);
		cp++;
	}
	return 0;
}
