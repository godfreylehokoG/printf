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
void _putnbr(int num);
int lennbr(int num);
int lenstr(char *s);
int _atoi(char *str);
char *_itoa(int n);
int my_print(va_list argv, const char format);
int print_int_binary(va_list argv);
void recursion_int_binary(int a);
#endif
