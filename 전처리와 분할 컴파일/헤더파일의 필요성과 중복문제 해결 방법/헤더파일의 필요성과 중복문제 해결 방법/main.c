#include <stdio.h>
#include "point.h"
#include "line.h"

int main(void)
{
	Line a = { {1,2},{5,6} };
	Point b;

	b.x = (a.first.x + a.second.x) / 2;
	b.y = (a.first.y + a.second.y) / 2;
	printf("the middle point of the line : (%d,%d)\n", b.x, b.y);

	return 0;
}