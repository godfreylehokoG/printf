#include "../main.h"

int main(void)
{
	char s[10] = "test1";
	int i = 100;
	int c = 'c';

	_printf("%s\n", s);
	/*printf("%s\n", s);*/
	_printf("%d\n", i);
	_printf("%c", c);
}
