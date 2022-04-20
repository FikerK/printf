#include "main.h"

/**
 * print_b - prints unsigned int as a binary
 * @b: va_list unsigned integer
 * Return: number of digits
 */

int print_b(va_list b)
{
	unsigned int i, n, m, sum, c;
	unsigned int a[32];

	n = va_arg(b, unsigned int);
	/* 2 ^ 31 */
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, c = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar(a[i] + '0');
			c++;
		}
	}
	return (c);
}

/**
 * print_u - prints unsigned int decimal
 * @U: va_list unsigned integer
 * Return: number of digits
 */

int print_u(va_list u)
{
	unsigned int m = 1, c = 0, n;

	n = va_arg(u, unsigned int);
	while ((n / m) > 10)
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
 * print_o - prints unsigned int in octal
 * @o: va_list unsigned integer
 * Return: number of digits
 */

int print_o(va_list o)
{
	unsigned int i, n, m, sum, c;
	unsigned int a[11];

	n = va_arg(o, unsigned int);
	/*8 ^ 10*/
	m = 1073741834;
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, c = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar(a[i] + '0');
			c++;
		}
	}
	return (c);
}

/**
 * print_hex - prints unsigned int in hexadecimal
 * @x: va_list unsigned integer
 * @f: flag to determine if lower x or upper X
 * Return: number of digits
 */

int print_hex(unsigned int n, unsigned int f)
{
	unsigned int a[8];
	unsigned int i, m, sum, c;
	char d;

	/*16 ^ 7*/
	m = 268435456;
	if (f)
		d = 'A' - ':';
	else
		d = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, c = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar(a[i] + '0');
			else
				_putchar(a[i] + d + '0');
			c++;
		}
	}
	return (c);
}
