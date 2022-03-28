#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list i);
int printf_string(va_list s);

/**
 * struct original - struc for search character
 * @s: character to check
 * @f: function pointer
 */

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
int printf_integer(va_list i);
char *_atoi(long int num, int base);
int printf_percent(va_list p);
int printf_double(va_list d);

#endif /*MAIN_H*/
