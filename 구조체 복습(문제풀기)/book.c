#include <stdio.h>

struct book
{
	char title[20];
	char author[20];
	int page;
	int price;
};

int main(void)
{
	struct book book1 = {"Justice", "Michael Saendel", 320, 10 };
	printf("title : %s\n", book1.title);
	printf("author : %s\n", book1.author);
	printf("page : %d.p\n", book1.page);
	printf("price : %d$\n", book1.price);
	
	return 0;
}