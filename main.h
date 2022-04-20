#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _isdigit(char d);
void _putstr(char *str);
int print_all(const char * const format, ...);
int super_print(const char * const format, ...);
void _putnbr(int num);
int lennbr(int num);
int lenstr(char *s);
int _atoi(char *str);
char *_itoa(int n);
int my_print(va_list argv, const char format);
int _numlen(int n);
int _hex_u(unsigned int n);
int _hex_l(unsigned int n);
int _oct(unsigned int n);
int _ui(unsigned int n);
int print_int_binary(unsigned int new);

#endif
