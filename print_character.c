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
