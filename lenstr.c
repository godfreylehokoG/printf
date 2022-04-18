#include "main.h"

/**
 * lenstr -
 * s: str to printed and measured
 * Rturn: str len.
 */

int lentsr(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	while (*s)
	{
		_putchar(s++);
		i++;
	}
	return (i);
		
}
