#include <stdio.h>

/**
 * main- prints the  times table.
 *
 * Return: value 0.
 **/
int main(void)
{
	int i, a = 1, b = 2, c;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i != 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
