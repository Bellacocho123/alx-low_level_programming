#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c to stdout
 * @c: the character to print
 *
 * Return: 1 successful
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
