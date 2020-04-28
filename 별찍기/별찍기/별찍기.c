#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0;i < 5;i++)
	{
		if (i == 0)
			printf("    ");
		if (i == 1)
			printf("   ");
		if (i == 2)
			printf("  ");
		if (i == 3)
			printf(" ");

		for (j = 0;j < 2 * i + 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1;i < 5;i++)
	{

		if (i == 1)
			printf(" ");
		if (i == 2)
			printf("  ");
		if (i == 3)
			printf("   ");
		if (i == 4)
			printf("    ");
		for (j = 9;j > 2 * i;j--) {

			printf("*");
		}
		printf("\n");
	}
	return 0;
}