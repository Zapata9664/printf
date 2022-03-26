#include "main.h"
/**
* search - find character
* @c: character to find
* Return: a pointer function
*/

int (*search(char c))(va_list)
{
	estructura arr[] = {
		{"c", printf_character},
		{"s", printf_string},
		{"%", printf_percent},
		{"i", printf_integer},
		{"d", printf_double},
		{NULL, NULL}};

	int i = 0;
	char *x = &c;

	while (arr[i].s != NULL)
	{
		if (_strcmp(arr[i].s, x) == 0)
		{
			return (arr[i].f);
		}
		i++;
	}
	return (NULL);
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

	va_start(list, format);

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
			function = search(format[i]);
			counter += (function) ? function(list) : _printf("%%%c", format[i]);
		}
		i++;
	}
	va_end(list);
	return (counter);
}
