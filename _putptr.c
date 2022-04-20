#include "main.h"

/**
 * _plen - measures length of pointer
 * @num: ptr to measure
 * Return: length ptr
 */

int _plen(intptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

/**
 * _putptr - conversion function
 * @num: ptr to convert
 * Return: void function
 */

void _putptr(intptr_t num)
{
	if (num >= 16)
	{
		_putptr(num / 16);
		_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			_putchar(num + '0');
		else
			_putchar(num - 10 + 'a');
	}
}

/**
 * _printptr - prints ptr
 * @ptr: prt to print
 * Return: size of ptr
 */

int _printptr(unsigned long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		_putptr(ptr);
		print_length += _plen(ptr);
	}
	return (print_length);
}
