#include "main.h"

/**
 * print_c - prints a char
 * @c: va_list character
 * Return: 1
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - prints a string
 * @s: va_list string
 * Return: number of chars
 */

int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_i - prints integer
 * @i: va_list integer
 * Return: number of digit
 */

int print_i(va_list i)
{
	unsigned int m = 1, c = 0;
	int n = va_arg(i, int);

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		c++;
	}
	while ((n / m) >= 10)
		m *= 10;
	while (m > 1)
	{
		_putchar((n / m) + '0');
		n %= m;
		m /= 10;
		c++;
	}
	_putchar((n / m) + '0');
	c++;
	return (c);
}

/**
 * print_x - prints unsigned int as lowercased hexadecimal
 * @x: va_list unsigned integer
 * Return: number of digits
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - prints unsigned int as uppercased hexadecimal
 * @X: va_list unsigned integer
 * Return: number of digits
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
