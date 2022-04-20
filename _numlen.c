#include "main.h"

/**
 * _numlen - measures a length of a number
 * @n: n to be measured
 * Return: length of number
 */

int _numlen(int n)
{
	int i = 0;

	if (n == 0)
	{
		i++;
	}
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
