#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int printf_character(va_list i)
{
<<<<<<< HEAD
    int ch = va_arg(i, int);
=======
    char ch = va_arg(i, int);
>>>>>>> 75fdf0103b09f08829d2324f75129d5e41ceb98e
    _putchar(ch);
    return (1);
}

int printf_string(va_list s)
{
<<<<<<< HEAD
    int i = 0;
    char *str = va_arg(s, char*);

    if (str == NULL)
    str = "(null)";
=======
    int count = 0, i = 0;

    char *str = va_arg(s, char*);
>>>>>>> 75fdf0103b09f08829d2324f75129d5e41ceb98e

    for(i; str[i]; i++)
    {
        _putchar(str[i]);
<<<<<<< HEAD
    }
    return(i);
=======
        count++;
    }
    return(count);
>>>>>>> 75fdf0103b09f08829d2324f75129d5e41ceb98e
}
