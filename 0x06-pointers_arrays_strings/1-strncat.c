#include "main.h"

/**
 * _strncat - concatenate two strigs but add inputed number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parmter to compare index to
 * Return: return new concatented string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
	       dest[dest_len++] = src[index];

	return (dest);
}
