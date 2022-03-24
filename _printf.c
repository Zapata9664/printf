#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int (*search(const char *format))(va_list)
{
    estructura arr[] = {
        ("c", printf_character);
    ("s", printf_string);
    (NULL, NULL);
};

int i = 0;

for (i; arr[i].s; i++)
{
    if (*format == arr[i].s)
    {
        break;
    }
    return (arr[i].f);
}
}

int _printf(const char *format, ...)
{
    int i = 0;
    int counter;

    for (i; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            counter++;
        }
    }
}
