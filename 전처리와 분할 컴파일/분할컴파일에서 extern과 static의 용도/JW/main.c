#include <stdio.h>

int input_data(void);
double average(void);
void print_data(double);

int count = 0;
static int total = 0;

int main(void)
{
	double avg;

	total = input_data();
	avg = average();
	print_data(avg);

	return 0;
}

void print_data(double avg)
{
	printf(" the number of input positive number : %d\n", count);
	printf(" the whole total and average : %d, %.1lf\n", total, avg);	
}