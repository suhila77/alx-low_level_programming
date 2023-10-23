#include "main.h"

/**
 * _memset - fills memory with a contant type.
 * @s: pointer to put the contant
 * @b: constsnt
 * @n: max bytes to use
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
