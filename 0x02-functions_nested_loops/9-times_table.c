#include "main.h"
#include <stdio.h>
/**
 * times_tables - prints the 9 times table starting with 0
 */
void times_tables(void)
{
	int i, j, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			printf("%d", ", result);
		}
		printf("\n");
	}
	printf("\n");
}
			
