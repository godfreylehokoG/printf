#include "main.h"

/**
 * _oct - function to print octal
 * @n: list being passed
 * Return: updated count
 */
int _oct(unsigned int n)
{
	int count = 0, i;
	int *arr;
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
