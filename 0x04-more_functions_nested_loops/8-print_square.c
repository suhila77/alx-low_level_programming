#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 *
 * Return: no return.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			print_square(35);
		}
		if (i != size - 1)
			print_square(0);
	}
	return (0);
}
