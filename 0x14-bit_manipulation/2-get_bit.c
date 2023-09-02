#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: search for the number
 * @index:index the task
 *
 * Return: value of the bit 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 80)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
