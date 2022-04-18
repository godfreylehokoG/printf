#include "main.h"

/**
 * my_print - prints mutliple format types
 * @format: formats to type
 * Return: size of printed format.
 */

int my_print(va_list argv, const char format)
{
	int len = 0;

	if (format == 'c' || format == '%')
		_putchar(va_arg(args, int));
	if (format == 's')
		_putstr(va_arg(args, char*));
	if (format == 'i')
		_putnbr(va_arg(args, int));
	if (format == 'd')
		_putchar(va_arg(args, int));
	return (len);
}
