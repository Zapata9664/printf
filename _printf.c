#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include <string.h>

int (*search(const char *format))(va_list)
{
    estructura arr[] = {
        {"c", printf_character},
        {"s", printf_string},
        {NULL, NULL}};

    int i = 0;

    for (i; arr[i].s != NULL; i++)
    {
        if (strcmp(format, arr[i].s) == 0)
        {
            return (arr[i].f);
        }
    }
    return(NULL);
}

int _printf(const char *format, ...)
{
    int i = 0, counter = 0;
    va_list list;
    va_start(list, format);
    int (*f)(va_list);

    for (i; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            counter++;
        }
        else
        {
            i++;
            if (format[i] != '\0')
            {
                printf("%c", format[i]);
                f = search(&format[i]);
                printf("%c", format[i]);
                counter += f(list);
            }
            
        }
    }
    va_end(list);
    return(counter);
}

int main(void)
{
    char ch = 'd';
    _printf("%c\n", ch);
    printf("%c\n", ch);
    return (0);
}