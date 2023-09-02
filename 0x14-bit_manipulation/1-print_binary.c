#include "main.h"
#include <stdio.h>

/**
 * print_binary - a func that print the binary rep of a numb for this task
 *
 * @n: decimal numb to print as binary for the task
 */
void print_binary(unsigned long int n)
{
	unsigned long int tempo;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tempo = n, shifts = 0; (tempo >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
