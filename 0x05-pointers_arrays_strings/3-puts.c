#include "main.h"

/**
 * _puts - function that prints a string
 * @s: string is to be continued
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
