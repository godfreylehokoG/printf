#include "main.h"

/**
 * lenstr - print and measure a str
 * s: str to printed and measured
 * Rturn: str len.
 */

int lenstr(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	while (*s)
		_putchar(s[i++]);
	return (i);
}
