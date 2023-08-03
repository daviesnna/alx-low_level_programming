#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer
 *                   is a prime number, otherwise return 0.
 * @n: number
 *
 * Return: 1 (True), 0 (False)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - check if the number is prime
 *
 * @n: number
 * @i: iterator
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}
