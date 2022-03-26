#include "main.h"

/**
 * printf_character - print character
 * @i: list
 * Return: one always
 */

int printf_character(va_list i)
{
	char ch = va_arg(i, int);

	_putchar (ch);

	return (1);
}

/**
 * printf_string - print a string
 * @s: list
 * Return: number
 */

int printf_string(va_list s)
{
	int i;
	char *str = va_arg(s, char*);

	if (str == NULL)
	str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
