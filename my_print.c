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
	{
		_putchar(va_arg(argv, int));
		len += 1;
	}
	else if (format == 's')
		len += lenstr(va_arg(argv, char*));
	else if (format == 'i')
		len += lennbr(va_arg(argv, int));
	else if (format == 'd')
		len += lennbr(va_arg(argv, int));
	return (len);
}
