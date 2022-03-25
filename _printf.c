#include "main.h"

int (*search(char c))(va_list)
{
    estructura arr[] = {
        {"c", printf_character},
        {"s", printf_string},
        {NULL, NULL}};

    int i = 0;
    char *x = &c;

    for (i; arr[i].s != NULL; i++)
    {
        if (_strcmp(arr[i].s, x) == 0)
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

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            counter++;
        }
        else
        {
            i++;
            f = search(format[i]);
            counter += (f) ? f(list) : _printf("%%%c", format[i]);
        }
        i++;
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