#include <stdio.h>
#pragma pack(push, 1)
typedef struct
{
	char ch;
	int in;
}Sample1;

#pragma pack(pop)
typedef struct
{
	char ch;
	int in;
}Sample2;

int main(void)
{
	printf("size of structure Sample1 : %dbyte\n", sizeof(Sample1));
	printf("size of structure Sample1 : %dbyte\n", sizeof(Sample2));
	
	return 0;
}
