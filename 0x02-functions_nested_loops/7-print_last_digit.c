#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extreact the last digit from
 * Return: a
 */
void print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (i < 0)
		a = -a;
	_putchar(a + '0');
return (a);
}
