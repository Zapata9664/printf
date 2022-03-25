#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list i);
int printf_string(va_list s);

typedef struct original
{
    char *s;
    int (*f)(va_list);
} estructura;

int (*search(char format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list i);
int printf_string(va_list s);
int _strcmp(char *s1, char *s2);

#endif /*MAIN_H*/
