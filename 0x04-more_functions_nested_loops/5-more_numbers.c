#include "main.h"

/**
 * more_numbers - print numbers
 *
 **/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
        for (j = 0; j < 10; j++)
        {
            _putchar('0' + j);
        }
        _putchar('\n');
	}
}
