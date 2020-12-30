#include <stdio.h>
#define PI 3.141592
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("Get out of range!\n")

int main(void)
{
	double radius, area;

	printf("input the radius(under 10) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRN;
	else printf("area of circle : %.2lf (%s)\n", area, MSG);

	return 0;
}

