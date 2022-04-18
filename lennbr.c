#include "main.h"

/**
 * _atoi - converts a str int int
 * @str: str to be converted
 * Return: converted str.
 */

int	_atoi(const char *str)
{
	int	cnt;
	int	neg;
	int	num;

	cnt = 0;
	neg = 1;
	num = 0;
	if (!str)
		return (0);
	while ((str[cnt] >= '\t' && str[cnt] <= '\r') || str[cnt] == ' ')
		cnt++;
	if (str[cnt] == '-')
		neg = -1;
	if (str[cnt] == '+' || str[cnt] == '-')
		cnt++;
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		num = (str[cnt] - '0') + (num * 10);
		cnt++;
	}
	return (num * neg);
}

/**
 * lennbr - prints a number
 * @num: number to be printed
 * Return: length of number.
 */

int lennbr(int num)
{
	int i = 0;
	char *nbr;

	nbr = _itoa(num);
	i = lenstr(nbr);
	free(nbr);
	return (i);
}
