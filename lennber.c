#include "main.h"

/**
 * lennbr - print and measure number
 * @num: number to be printed and measured
 * Return: number length.
 */

int lennbr(int num)
{
	int i = _numlen(num);
	unsigned int n;

	n = 0;
	if (num >= 0)
		n = num;
	if (num < 0)
	{
		n = num * -1;
		_putchar('-');
	}
	if (n > 9)
	{
		_putnbr(n / 10);
	}
	_putchar((n % 10) + '0');
	return (i);
}
