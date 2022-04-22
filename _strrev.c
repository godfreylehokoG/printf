#include "main.h"

/**
 * _strrev - prints and measures a reversed a str
 * @s: str to reverse and measure
 * Return: length of str.
 */

int _strrev(char *s)
{
	int i = _strlen(s);

	if (s == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	while (i >= '\0')
		_putchar(s[i--]);
	return (_strlen(s));
}
