#include "main.h"

/**
 * print_int_binary - fuction to print binary
 * @bi: list being passed
 * Return: updated count
 */
int _print_int_binary(unsigned int b)
{
	int count = 0;
	int i;
	int *arr;
	unsigned int tmp = b;

	while (b / 2 != 0)
	{
		b /= 2;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
