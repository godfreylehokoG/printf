#include "main.h"

/**
 * _ui - unsigned int print to stdout
 * @n: list being passed
 * Return: char count
 */
int _ui(unsigned int n)
{
	int expo = 1;
	int len = 0;

	while (n / expo > 9)
		expo *= 10;
	while (expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}
