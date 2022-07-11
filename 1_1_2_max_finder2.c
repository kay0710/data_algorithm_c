/*세 값의 최대값 찾기*/
#include <stdio.h>

int max3(int arg1, int arg2, int arg3)
{
	int max = arg1;
	if (arg2 > max) max = arg2;
	if (arg3 > max) max = arg3;

	return max;
}

int main(void)
{
	int a, b, c;
	int result;
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	result = max3(a, b, c);
	printf("max: %d", result);

	return 0;
}