#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: print int
 * Return: Always 0;
 */

void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				print_diagonal(' ');
			}
			 print_diagonal(92);
			 print_diagonal('\n');
		}
	}
	else
	{
		 print_diagonal('\n');
	}
}
