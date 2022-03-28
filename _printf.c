#include "main.h"
/**
* search - find character
* @c: character to find
* Return: a pointer function
*/

int (*search(char c))(va_list)
{
<<<<<<< HEAD
    estructura arr[] = {
        {"c", printf_character},
        {"s", printf_string},
        {NULL, NULL}};
=======
	estructura arr[] = {
		{"c", printf_character},
		{"s", printf_string},
		{"%", printf_percent},
		{"i", printf_integer},
		{"d", printf_double},
		{NULL, NULL}};
>>>>>>> c87f86f6fe589bfea4e6f29d9a4f10df124fa95f

	int i = 0;
	char *x = &c;

<<<<<<< HEAD
    for (i; arr[i].s != NULL; i++)
    {
        if (_strcmp(arr[i].s, x) == 0)
        {
            return (arr[i].f);
        }
    }
    return(NULL);
=======
	while (arr[i].s != NULL)
	{
		if (_strcmp(arr[i].s, x) == 0)
		{
			return (arr[i].f);
		}
		i++;
	}
	return (NULL);
>>>>>>> c87f86f6fe589bfea4e6f29d9a4f10df124fa95f
}

/**
 * _printf - learning how works printf
 * @format: source
 * Return: 0 always
 */


int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	va_list list;
	int (*function)(va_list);

<<<<<<< HEAD
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
=======
	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}

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
			if (format[i] == '\0')
			{
				return (-1);
			}
			function = search(format[i]);
			counter += (function) ? function(list) : _printf("%%%c", format[i]);
		}
		i++;
	}
	va_end(list);
	return (counter);
}
>>>>>>> c87f86f6fe589bfea4e6f29d9a4f10df124fa95f
