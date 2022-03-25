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
	int i = 0, counter = 0;
	va_list list;

	for (i; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
        else
        {
            if (format[i + 1] != NULL)
            {
            f = search(&format[i + 1]);
            if (f != NULL)
            {
                f(list);
            }
            else
            {}

        }
	}
}
