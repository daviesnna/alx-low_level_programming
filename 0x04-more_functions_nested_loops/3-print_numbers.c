#include "main.h"

/**
 * print_numbers - print 0 - 9
 *                 only using _putchar twice
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
