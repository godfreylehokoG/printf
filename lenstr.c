#include "main.h"

/**
 * lenstr - print and measure a str
 * @s: str to be printed and measured
 * Return: str len.
 */

int lenstr(char *s)
{
	int i = 0;
	int len;

	while (s[i] != '\0')
		_putchar(s[i++]);
	len = _strlen(s);
	return (len);
}
