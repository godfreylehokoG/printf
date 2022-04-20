#include "../main.h"

int main()
{
/*	char d = '5';

	if (_isdigit(d))
		printf("Yep it's a digit!\n");
	else
		printf("Not a digit!\n");
*/
/*	char str[17] = "this is a string";

	printf("Length of string is = %d\n", _strlen(str));
 */
	int n1 = -12345;
	int n2 = 12345;
	int len = 0;
	int len2 = 0;

	printf("print negative number n1\n");
/*	_putnbr(n1); */
	len = lennbr(n1);
	printf("\n");
	printf("%d\n", len);
/*	_putchar('\n');*/
	printf("print positive number n2\n");
/*	_putnbr(n2); */
	len2 = lennbr(n2);
	printf("\n");
	printf("%d\n", len2);
}

