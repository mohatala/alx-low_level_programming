#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e')
		{
			if (a != 'q')
			{
				putchar(a);
			}
		}
	}
	putchar('\n');
	return (0);
}
