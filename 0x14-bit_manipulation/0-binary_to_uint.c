#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0, if b is NULL
 * or there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	int i, j;

	if (b == NULL)
		return (0);

	i = 0;

	while (b[i] != '\0')
		i++;

	j = 0;

	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (0);

		if (b[j] == '1')
			binary += (1 * (1 << (i - 1)));

		j++;

		i--;
	}

	return (binary);
}
