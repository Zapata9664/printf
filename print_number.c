#include "main.h"

/**
 * printf_integer - print an integer
 * @i: characters
 * Return: numbers of characters to print
 */

int printf_integer(va_list i)
{
	int s, n;
	char *ptr;

	n = va_arg(i, int);

	ptr = _atoi(n, 10);

	for (s = 0; ptr[s] != '\0'; s++)
	{
	_putchar (ptr[s]);
	}
	return (s);
}

/**
 * printf_double - print an double
 * @d: characters
 * Return: numbers of characters to print
 */

int printf_double(va_list d)
{
	int s, n;
	char *ptr;

	n = va_arg(d, int);

	ptr = _atoi(n, 10);

	for (s = 0; ptr[s] != '\0'; s++)
	{
	_putchar (ptr[s]);
	}
	return (s);

}
