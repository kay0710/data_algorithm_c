#include <stdio.h>

int main(void)
{
	int row, col;

	for (row = 1; row < 10; row++)
	{
		if (row == 1)
		{
			printf("   |");
			for (col = 1; col < 10; col++)
			{
				printf("% 3d", row * col);
			}
			printf("\n---+---------------------------\n");
		}
		for (col = 1; col < 10; col++)
		{
			if (col == 1)
			{
				printf(" %d |", row * col);
			}
			printf("% 3d", row + col);
		}
		printf("\n");
	}

	return 0;
}