#include "main.h"

/**
 * _strlen - measures str length
 * @s: str to be measured
 * Return: size of the str.
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}


