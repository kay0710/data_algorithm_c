#include <stdio.h>

/*mid finder 3*/
int mid3(int arg1, int arg2, int arg3)
{
	int mid;
	if (arg1 > arg2)
	{
		if (arg2 > arg3)
			mid = arg2;
		else if (arg2 < arg3)
		{
			if (arg1 > arg3)
				mid = arg3;
			else if (arg1 < arg3)
				mid = arg1;
		}	
	}	
	else if (arg1 < arg2)
	{
		if (arg2 > arg3)
		{
			if (arg1 > arg3)
				mid = arg1;
			else if (arg1 < arg3)
				mid = arg3;
		}
		else if (arg2 < arg3)
			mid = arg2;
	}
	else if (arg1 == arg2 && arg2 == arg3)
		mid = arg1;
	else
		mid = -1;
	return mid;
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

	result = mid3(a, b, c);
	if (result == -1)
	{
		printf("There is no mid3: %d\n", result);
	}
	else
		printf("mid3: %d\n", result);

	return 0;
}
