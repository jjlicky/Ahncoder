#include <stdio.h>

char* my_strcmp(char* pd, char *ps);		// 함수 선언

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "banana";
	printf("사전에 나중에 나오는 과일 이름 : %s");
	if (my_strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);

	return 0;
}

int* my_strcmp(char* pd, char ps)			
{
	while ((*pd == *ps)&&(*pd != '\0'))
	{
		pd++;
		ps++;
	}

	if (*pd > *ps) return 1;
	else if (*pd < *ps) return -1;
	else return 0;
}


