#include "main.h"

/**
 * _isdigit - check if the passed character is a digit or not
 * @d: potential digit
 * Return: 1 if it is a digit 0 if not.
 */

int _isdigit(char d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}
