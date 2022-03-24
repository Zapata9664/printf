#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int (*search (const char *format))(va_list)
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
for (i; format[i] != '%'; i++)
{
write(1,&c,1);
counter++;
}
}

int main (void)
{
_printf("hola");
return (0);
}