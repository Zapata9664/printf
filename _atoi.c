#include "main.h"

/**
 * _atoi - convert an int to character for can pass to write
 * @num: the number to print
 * @base: 10
 * Return: numbers of characters to print
 */


char *_atoi(long int num, int base)
{
	static char *array = "0123456789";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
