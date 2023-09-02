#include "main.h"

/**
 * clear_bit - sets the nmber of bit to 0
 * @n:change of number
 * @index: index of the bit for this task
 *
 * Return: 1 for success, -1 for failure for the project
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 93)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
