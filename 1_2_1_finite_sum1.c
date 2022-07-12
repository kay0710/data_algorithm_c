#include <stdio.h>

int main(void)
{
	int i, n;

	int sum;
	puts("finite sumation 1 to n");
	printf("n: ");
	scanf("%d", &n);

	sum = 0;
	i = 1;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("result: %d", sum);

	return 0;
}