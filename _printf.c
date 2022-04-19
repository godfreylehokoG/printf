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
	int i = 0;
	char *str;
	int len;

	va_start(argv, format);
	while (format != NULL && format[i] != 0)
	{
		if (format[i + 1] == '%')
		{
			_putchar(37);
			len += 1;
		}
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(argv, int));
				len += 1;
				break;
			case 'i':
				len += lennbr(va_arg(argv, int));
				break;
			case 'd':
				len += lennbr(va_arg(argv, int));
				break;
			case 's':
				len += lenstr(va_arg(argv, char *));
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(argv);
	return (len);
}
