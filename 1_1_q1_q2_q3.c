#include <stdio.h>

/*max finder 4*/
int max4(int arg1, int arg2, int arg3, int arg4)
{
	int max = arg1;
	if (arg2 > max) max = arg2;
	if (arg3 > max) max = arg3;
	if (arg4 > max) max = arg4;

	return max;
}

/*min finder 3*/
int min3(int arg1, int arg2, int arg3)
{
	int min = arg1;
	if (arg2 < min) min = arg2;
	if (arg3 < min) min = arg3;

	return min;
}

/*min finder 4*/
int min4(int arg1, int arg2, int arg3, int arg4)
{
	int min = arg1;
	if (arg2 < min) min = arg2;
	if (arg3 < min) min = arg3;
	if (arg4 < min) min = arg4;

	return min;
}

int main(void)
{
	int a, b, c, d;
	int result;
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	printf("d: ");
	scanf("%d", &d);

	result = max4(a, b, c, d);
	printf("max 4: %d\n", result);

	result = min3(a, b, c);
	printf("min 3: %d\n", result);

	result = min4(a, b, c, d);
	printf("min 4: %d\n", result);

	return 0;
}