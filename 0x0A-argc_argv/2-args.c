#include <stdio.h>
#include "main.h"

/**
 * main - funtion that prints all arguments it receives
 * @argc: num of arguments
 * @argv: argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
