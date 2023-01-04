#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: print int
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			print_line(95);
		}
		print_line('\n');
	}
	else
	{
		print_line('\n');
	}
}
