#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list i);

typedef struct original
{
    char s;
    int (f)(va_list);
} estructura;


#endif /MAIN_H/
