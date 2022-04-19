#include "main.h"

/**
 * lenstr - print and measure a str
 * s: str to printed and measured
 * Rturn: str len.
 */

int lenstr(char *s)
{
	int i = 0;
	int len;

	if (s == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	while (s[i] != '\0')
		_putchar(s[i++]);
	len = _strlen(s);
	return (len);
}
