#include "main.h"

/**
 * lenstr - print and measure a str
 * s: str to printed and measured
 * Rturn: str len.
 */

int lenstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
