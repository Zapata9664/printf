#include "main.h"

/**
 * printf_percent - print one percent
 * @p: characters
 * Return: numbers of characters to print
 */

int printf_percent(va_list p __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
