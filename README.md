# printf

The _printf function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout. _printf includes the conversion specifiers: c, s, %, d, x, X, u, o, bi, and i.

##Example
```c
#include "main.h"
_printf("the %s landed on %d paws", "cat", 4);
```
output : The cat landed on 4 paws

## Project Requirments
- All files will be complied on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- Your code should use the Betty style
- You are not allowed to use global variables
- Authorized functions and macros:
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

# Custom printf functions

## Files and functions
* **_putchar.c**:
* int _putchar(char c) - function to print char

* **_lenstr.c**:
* int lenstr(char *s) - print and measure a string

* **_isdigit.c**:
* int _isdigit(char d) - checks if the passed character is a digit or not

* **_putnbr.c**:
* void _putnbr(int num) - prints a number

* **_putstr.c**:
* void _putstr(char *str) - writes a string

* **_strlen.c**:
* int _strlen(char *s) - measures the length of a string

* **bi-printers.c**:
* int print_int_binary(va_list argv) - Prints a int coverted to binary

* **hex_printers.c**:
* int _hex_str(unsigned int n, unsigned int hex,char alpha) - converts number from base 10 to hex
* int _hex_l(va_list hexa) - prints lowercase hexa
* int _hex_u(va_list hexa) - prints uppercase hexa

* **oct_printers.c**:
* int _oct(va_list octo) - function to print octal

* **ui_printers.c**:
* int _ui(va_list unsign) - unsigned int print to stdout

* **lennbr.c**:
* int lennbr(int num) - prints a number

* **super_printer.c**:
* int super_print(const char * const format, ...) - Sums all given parameters

* **main.h**: header file

* **man_3_printf**: _printf man page

* **printf.c**: main custom _printf function
  * int _printf(const char *format, ...) - printf clone

### Notes
our program does not handle buffer handling, flag characters, field width, precision, or length modifiers.

### Authors
Lehlohonolo Lehoko
