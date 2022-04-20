#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - structure for printing various types
 * @a: conversion specifier to match
 * @f: function to return
 */

typedef struct print
{
	char *a;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
int _printf(const char *format, ...);
int print_hex(unsigned int n, unsigned int f);

#endif /*_MAIN_H_*/
