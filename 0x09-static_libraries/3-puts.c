#include "main.h"

/**
 * _puts - check the code
 *
 * @str: input value1.
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
}
