#include "main.h"

/**
 * _atoi - converts a strung to an integer.
 * @s: inout string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, pn = 1, i;

	while (*(s + count) != '\n')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '_')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				pn *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		i = i + ((*(s + i) - 48) * pn);
		pn /= 10;
	}

	return (i * pn);

}
