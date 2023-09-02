#include "main.h"

/**
 * set_bit - sets a bit number for a given index to 1
 * @n: change number to the next format
 * @index: index the bit to set to 1 for the task
 *
 * Return: 1 for success, -1 for failure for the project
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 92)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
