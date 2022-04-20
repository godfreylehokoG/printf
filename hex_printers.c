#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _hex_str - converts the number from base 10 to hex
 * @n: number to be converted
 * @hex: base of 16 being passed
 * @alpha: char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */

int _hex_str(unsigned int n, unsigned int hex, char alpha)
{
	unsigned int a = n % hex;
	unsigned int b = n / hex;
	char c;

	if (a > 10)
		c = (a - 10) + alpha;
	else
		c = a + '0';
	if (b == 0)
	{
		return (_putchar(c));
	}
	if (n <= hex)
	{
		if (b < 10)
			return (_putchar(b - 10 + alpha) + _putchar (c));
		return (_putchar(b + '0') + _putchar(c));
	}
	return (_hex_str(b, hex, alpha) + _putchar(c));
}

/**
 * _hex_l - print lower case hexa
 * @n: argument recieveed
 * Return: no of char printed
 */

int _hex_l(unsigned int n)
{
	return (_hex_str(n, 16, 'a'));
}

/**
 * _hex_u - printing upper case hexa
 * @n: argument recieved
 * Return: number of char printed
 */
int _hex_u(unsigned int n)
{
	return (_hex_str(n, 16, 'A'));
}
