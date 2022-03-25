#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list i);
int printf_string(va_list s);

typedef struct original
{
    char *s;
    int (*f)(va_list);
} estructura;


#endif /*MAIN_H*/
