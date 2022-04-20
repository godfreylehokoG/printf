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
	int len;
	char *str;
	int num;

	va_start(argv, format);
	while (format != NULL && format[i] != 0)
	{
		if (format[i] != '%')
		{
			_putstr(va_arg(argv, char *));
		}
		else if (format[i + 1] == '%')
		{
			_putchar(37);
			len += 1;
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(argv, int));
			len += 1;
		}
/*		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(argv, int));
				len += 1;
				break;
			case 'i':
				_putnbr(va_arg(argv, int));
				break;
			case 'd':
				_putnbr(va_arg(argv, int));
				break;
			case 's':
				_putstr(va_arg(argv, char *));
				break;
			default:
				i++;
				continue;
		}
*/		i++;
	}
	printf("\n");
	va_end(argv);
	return (len);
}