#include <stdio.h>

int main(void)
{
	int a;

	puts("two-digit integer");

	do {
		printf("n: ");
		scanf("%d", &a);
	} while (a < 10 || a > 99);
	
	printf("n is set as \"%d\"", a);

	return 0;
}