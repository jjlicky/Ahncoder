#include <stdio.h>

int main(void)
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("c.txt", "r");

	fscanf(fp, "%d", &age);
	fgetc(fp);
	fgets(name, sizeof(name), fp);
	
	printf("���� : %d, �̸� : %s", age, name);
	fclose(fp);

	return 0;
}

