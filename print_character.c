#include "main.h"
#include <stdio.h>
#include <stlib.h>
#include <stdarg.h>

int printf_character(va_list i)
{
    char ch = (char)va_arg(i, int);
    _putchar(ch);
    return (1);
}

int printf_string(va_list s)
{
    int count = 0, i = 0;

    char *str = va_arg(s, char*);

    for(i; str[i]; i++)
    {
        _putchar(str[i]);
        count++;
    }
    return(count);
}
