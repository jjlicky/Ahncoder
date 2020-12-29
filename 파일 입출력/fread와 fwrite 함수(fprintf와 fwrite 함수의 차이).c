#include <stdio.h>

int main(void)
{
	FILE *afp, *bfp;
	int num = 10;
	int res;

	afp = fopen("d.txt", "wt");
	fprintf(afp, "%d", num);
	
	bfp = fopen("e.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);	
	
	fclose(afp);
	fclose(bfp);
	
	bfp = fopen("e.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);

	return 0;
}

