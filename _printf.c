#include "main.h"

/**
 * _formats - prints args of different formats
 * @args: args to be prinnted
 * @format: type of arg
 * Return: length
 */

int	_formats(va_list args, const char format)
{
	int	print_length = 0;

	if (format == 'c')
	{
		_putchar(va_arg(args, int));
		print_length += 1;
	}
	else if (format == 's')
		print_length += lenstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		print_length += lennbr(va_arg(args, int));
	else if (format == '%')
	{
		_putchar('%');
		print_length += 1;
	}
	else if (format == 'X')
		print_length += _hex_u(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += _hex_l(va_arg(args, unsigned int));
	else if (format == 'o')
		print_length += _oct(va_arg(args, unsigned int));
	else if (format == 'u')
		print_length += _ui(va_arg(args, unsigned int));
	else if (format == 'b')
		print_length += _print_int_binary(va_arg(args, unsigned int));
	return (print_length);
}

/**
 * _printf - print function
 * @format: type of args
 * Return: length of printed str
 */

int	_printf(const char *format, ...)
{
	int i;
	va_list args;
	int print_length;

	i = 0;
	print_length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			print_length += _formats(args, format[i + 1]);
			i++;
		}
		else
		{
			_putchar(format[i]);
			print_length += 1;
		}
		i++;
	}
	va_end(args);
	return (print_length);
}
