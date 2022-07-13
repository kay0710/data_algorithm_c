#include <stdio.h>

int main(void)
{
	int a;
	int sum = 0;

	puts("add 1 to n");

	do {
		printf("n: ");
		scanf("%d", &a);
	} while (a <= 0);
	for (int i = 1; i < a + 1; i++)
	{
		sum += i;
	}

	printf("result: %d", sum);

	return 0;
}