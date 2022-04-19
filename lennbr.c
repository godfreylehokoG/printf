#include "main.h"

/**
 * lennbr - prints a number
 * @num: number to be printed
 * Return: length of number.
 */

int lennbr(int num)
{
	int i = 0;
	char *nbr;

	nbr = _itoa(num);
	i = lenstr(nbr);
	free(nbr);
	return (i);
}
