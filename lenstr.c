#include "main.h"

/**
 * lenstr - print and measure a str
 * @s: str to be printed and measured
 * Return: str len.
 */

int lenstr(char *s)
{
<<<<<<< HEAD
	int i;
=======
	int i = 0;
	int len;
>>>>>>> ca0276867ea88a7ae435bf9691aefecef4034ddb

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
<<<<<<< HEAD
	return (i);
=======
	while (s[i] != '\0')
		_putchar(s[i++]);
	len = _strlen(s);
	return (len);
>>>>>>> ca0276867ea88a7ae435bf9691aefecef4034ddb
}
