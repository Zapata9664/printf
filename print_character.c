#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int printf_character(va_list i)
{
    int ch = va_arg(i, int);
    _putchar(ch);
    return (1);
}

int printf_string(va_list s)
{
    int i = 0;
    char *str = va_arg(s, char*);

    if (str == NULL)
    str = "(null)";

    for(i; str[i]; i++)
    {
        _putchar(str[i]);
    }
    return(i);
}
