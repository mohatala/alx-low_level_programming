#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: lenght triangle
 **/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 2; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = size - i; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
