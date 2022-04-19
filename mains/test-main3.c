#include "../main.h"

int main(void)
{
	int len1;
	int len2;
	int len3;
	int num = 12345;
	int num2 = -12345;
	char s[20] = "my new string";

	len1 = lenstr(s);
	printf("\n");
	len2 = lennbr(num); 
	printf("\n");
	len3 = lennbr(num2);
	printf("\n");
	printf("length of str %d\n", len1);
	printf("length of num1 %d\n", len2);
	printf("length of num2 %d\n", len3);
}
