#include <stdio.h>

struct cracker
{
	int calories;
	int price;
};

int main(void)
{
	struct cracker basasak;
	printf("Please input the price and calories : ");
	scanf("%d %d", &(basasak.price), &(basasak.calories));
	printf("the price of basasak : %d$\n", basasak.price);
	printf("the calories of basasak : %dkcal\n", basasak.calories);

	return 0;
}