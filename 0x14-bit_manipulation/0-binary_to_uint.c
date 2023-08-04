#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 *@c: num
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */


unsigned int binary_to_uint(const char *b)
{
	int i = 0, len;
	unsigned int trac = 1, res = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (_isdigit(b[i]) == 0)
		{
			return (0);
		}
		i = i + 1;
	}
	for (len = i - 1; len >= 0; len--)
	{
		if (b[len] == '0')
			;
		else
			res += trac;
		trac = trac * 2;
	}
	return (res);
}
