#include "main.h"

/**
 * get_endianness - checks endiannes in th etask
 *
 * Return: 0 for big for the known, 1 for little unknow
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
