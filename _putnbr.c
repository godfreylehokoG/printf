#include "main.h"

/**
 * _putnbr - prints a number
 * @num: number to be printed
 * Return: returns nothing
 */

void _putnbr(int num)
{
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
		_putnbr(n / 10);
	_putchar((n % 10) + '0');
}
