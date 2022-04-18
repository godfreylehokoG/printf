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
int print_all(const char * const format, ...);

#endif
