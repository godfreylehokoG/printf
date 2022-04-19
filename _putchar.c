#include <unistd.h>
/**
 * _putchar - print char
 * @c: char to be printed
 * Return: void function.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
