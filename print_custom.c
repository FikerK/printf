#include "main.h"

/**
 * hex_print - prints a char's ascii vaue in uppercase
 * @c: char to be printed
 * Return: number of chars
 */

int hex_print(char c)
{
	int i;
	char d = 'A' - ':';
	char a[2];

	a[0] = c / 16;
	a[1] = c % 16;
	for (i = 0; i < 2; i++)
	{
		if (a[i] >= 10)
			_putchar(a[i] + d + '0');
		else
			_putchar(a[i] + '0');
	}
	return (i);
}

/**
 * print_S - prints a string and non printables
 * @S: va_list string
 * Return: number of letters
 */

int print_S(va_list S)
{
	unsigned int i, c = 0;
	char *str = va_arg(S, char*);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			c += 2;
			c += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}
/**
 * print_r - prints reversed string
 * @r: va_list string
 * Return:
 * number of letters
 */

int print_r(va_list r)
{
	char *str;
	int i, c = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -=1; i >= 0; i--)
	{
		_putchar(str[i]);
		c++;
	}
	return (c);
}
