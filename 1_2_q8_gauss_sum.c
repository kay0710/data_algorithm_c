#include <stdio.h>

int gauss_sum(int arg1, int arg2)
{
	int sum;

	if (arg1 >= arg2)
		sum = (arg1 + arg2) * (arg1 - arg2 + 1) / 2;
	else if (arg1 < arg2)
		sum = (arg1 + arg2) * (arg2 - arg1 + 1) / 2;

	return sum;
}

int main(void)
{
	int a, b;

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);

	printf("gauss sum: %d", gauss_sum(a, b));

	return 0;
}