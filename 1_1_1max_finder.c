/*세 값의 최대값 찾기*/
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;
	printf("Let's find max.\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("max: %d", max);

	return 0;
}