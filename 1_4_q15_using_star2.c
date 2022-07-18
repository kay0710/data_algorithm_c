#include <stdio.h>

int main(void)
{
	int row, col;
	puts("print rectangular");
	printf("height: ");
	scanf("%d", &row);
	printf("width: ");
	scanf("%d", &col);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}