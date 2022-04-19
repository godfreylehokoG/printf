#include "../main.h"

int main(void)
{
	char s[10] = "test1";
	int i = 100;
	int n = -100;
	int c = 'c';
	int e = '%';
	int len_str = 0;
	int len_pos = 0;
	int len_neg = 0;
	int len_char = 0;

	len_str = _printf("%s\n", s);
/*	printf("%s\n", s);*/
	len_pos = _printf("%i\n", i);
	len_neg = _printf("%d\n", n);
	_printf("%c\n", c);
	len_char = _printf("%%\n", e);
	printf("len_char %d, len_pos %d, len_neg %d, len_str %d\n", len_str, len_pos, len_neg, len_char);
	return (0);
}
