#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...)
{
    char string = 0;
    /*char copy = 0;*/

    if ( format != NULL)
    {
        va_list str; /* create the argument*/
        /*va_list copy;  this the copy of argument*/

        va_start(str, format); /* init the pointer*/
        /*va_copy(copy, str);  this the copy of the pointer*/

        string += va_arg(str, int); /*send the position of pointer*/
        /*copy = va_arg(copy, ); the copy of the position of pointer*/

        va_end(str); /*finished the arguments*/
        /*va_end(copy); finished the argument*/
    }

    if (format == NULL)
    {
        return (0);
    }

    return(string);
    /*return(copy);*/
}