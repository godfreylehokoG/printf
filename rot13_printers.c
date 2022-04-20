#include "main.h"

/**
 * rot_13 - prints the replacement 13th letter for a particular letter
 * @s: list being passed
 * Return: count of chars
 */
int rot_13(char *s)
{
	int a;
	int count;

	a = count = 0;

	if (s == NULL)
		return (-1);
	while (s[a] != '\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'z') ||
				(s[a] > 'A' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'n' && s[a] <= 'z') ||
				(s[a] >= 'N' && s[a] <= 'Z'))
				count = count + _putchar(s[a] - 13);
			else
				count = count + _putchar(s[a] + 13);
		}
		else
			count = count + _putchar(s[a]);
		a++;
	}
	return (count);
}
