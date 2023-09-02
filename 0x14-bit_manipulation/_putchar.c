#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout in this program
 * @c: print c as output
 *
 * Return: On success 1 at te end.
 * On error, -1 is returned, and errno is set appropriately and accordling.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
