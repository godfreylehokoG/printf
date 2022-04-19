#include "main.h"

/**
 * _printf - printf clone
 *
 * @format: format type
 * Return: size of printed string excluding '\0'.
 */

int _printf(const char *format, ...)
{
	va_list argv;
	int i;
	int len;

	va_start(argv, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += my_print(argv, format[i + 1]);
			i++;
		}
		else
		{
			_putchar(format[i]);
			len += 1;
		}
		i++;
	}
	va_end(argv);
	return (len);
}
