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
int _numlen(int n);
int _hex_u(unsigned int n);
int _hex_l(unsigned int n);
int _oct(unsigned int n);
int _ui(unsigned int n);
int _print_int_binary(unsigned int b);
int rot_13(char *s);
int _printptr(unsigned long ptr);
int _strrev(char *s);

#endif
