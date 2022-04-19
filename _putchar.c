#include "main.h"

/**
 * _putchar - prints a char
 * @c: char to be printed
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
