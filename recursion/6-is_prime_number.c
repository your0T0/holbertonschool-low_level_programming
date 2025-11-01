#include "main.h"

/**
 * _prime_helper - recursive helper to test primality
 * @n: number to test
 * @i: current divisor candidate
 *
 * Return: 1 if prime, 0 otherwise
 */
int _prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_helper(n, 2));
}
