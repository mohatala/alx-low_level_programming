#include "main.h"
#include <stdio.h>

/**
 * main- prints the  times table.
 *
 * Return: value 0.
 **/
int main(void)
{
	int n = 50;
	int fib[50];
        int i;
	
	fib[0] = 1;
	fib[1] = 2;
        for(i = 2; i < n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if(i != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}