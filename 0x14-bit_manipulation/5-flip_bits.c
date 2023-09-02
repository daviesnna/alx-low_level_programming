#include "main.h"

/**
 * flip_bits - counts the number of bits to change in each task
 * this task is okk for me
 * @n: first unsigned
 * @m: second numbe unsignedr
 *
 * Return: number of bit success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}

	return (count);
}
