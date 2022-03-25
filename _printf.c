#include "main.h"
#include <string.h>

int (*search(char c))(va_list)
{
    estructura arr[] = {
        {"c", printf_character},
        {"s", printf_string},
<<<<<<< HEAD
=======
      /*  {"s", printf_string}, */
>>>>>>> 83e1bbd24576251f1e42d7f3da202496bb9aed9a
        {NULL, NULL}};

    int i = 0;
    char *x = &c;

    for (i; arr[i].s != NULL; i++)
<<<<<<< HEAD
=======
    {
        if (strcmp(format, arr[i].s) == 0)
        {
            return (arr[i].f);
        }
    }
    return(NULL);
    for (i; arr[i].s; i++)
>>>>>>> 83e1bbd24576251f1e42d7f3da202496bb9aed9a
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
<<<<<<< HEAD
            f = search(format[i]);
            counter += (f) ? f(list) : _printf("%%%c", format[i]);
=======
            if (format[i] != '\0')
            {
                printf("%c", format[i]);
                f = search(&format[i]);
                printf("%c", format[i]);
                counter += f(list);
            if (format[i + 1] != '\0')
            {
                f = search(&format[i + 1]);
                if (f != NULL)
                {
                    f(list);
                }
            }
            
>>>>>>> 83e1bbd24576251f1e42d7f3da202496bb9aed9a
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
<<<<<<< HEAD
=======
        va_end(list);
>>>>>>> 83e1bbd24576251f1e42d7f3da202496bb9aed9a
}