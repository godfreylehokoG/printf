#include "../main.h"

int main(void)
{
	char *str;
	int len;
	char s[20] = "hello world";
	
	len = _strrev(s);
	_putchar('\n');
	printf("%d\n", len);
	printf("%s\n", str);

	return (0);
}
