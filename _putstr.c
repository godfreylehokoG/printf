#include "main.h"

/**
 * putstr - writes a str
 * str: str to write
 * Return: void function.
 */

void _putstr(char *str)
{
	while (*str)
		_putchar(*str++);
}
