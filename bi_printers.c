#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int_binary - Prints a int converted to binary
 * @argv: a list of variadic arguments
 *
 * Return: The number of printed digits
 */
int print_int_binary(va_list argv)
{
	unsigned int a = 0;
	int b = 0;
	new = 0;

	new = va_arg(argv, int);
	a = new;
	if (new < 0)
	{
		_putchar('1');
		new = new * -1;
		a = new;
		b += 1;
	}
	while (a > 0)
	{
		a = a / 2;
		b++;
	}
	recursion_int_binary(new);
	return (b);
}

/**
 * recursion_int_binary - prints a binary
 * @a: integer to print
 *
 */
void recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		recursion_int_binary(t / 2);
	_putchar(t % 2 + '0');
}

