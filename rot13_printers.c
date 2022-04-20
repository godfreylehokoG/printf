#include "main.h"

/**
 * rot_13 - prints the replacement 13th letter for a particular letter
 * @rot: list being passed
 * Return: count of chars
 */
int rot_13(va_list rot)
{
	int a;
	int count;
	char *c;
	char *s;

	a = count = 0;
	c = va_arg(rot, char *);

	if (c == NULL)
		return (-1);
	while (c[a] != '\0')
	{
		if ((s[c] >= 'a' && s[c] <= 'z') ||
				(s[c] > 'A' && s[c] <= 'Z'))
		{
			if ((s[c] >= 'n' && s[c] <= 'z') ||
				(s[c] >= 'N' && s[c] <= 'Z'))
				count = count + _putchar(s[c] - 13);
			else
				count = count + _putchar(s[c] + 13);
		}
		else
			count = count + _putchar(s[c]);
		c++;
	}
	return (count);
}
