#include "main.h"
#include <stdio.h>

int act_prime(int n, int k);

/**
 * is_prime_number - function definition
 * Description: determines if an input integer is a prime number
 * @n: input integer
 *
 * Return: 1 if number is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (act_prime(n, n - 1));
}

/**
 * act_prime - function definition
 * Description: determines prime numbers
 * @k: itirator
 * @n: integer
 * Return: 1 if prime number otherwise 0
 */

int act_prime(int n, int k)
{
	if (k == 1)
		return (1);

	if (n % k == 0 && k > 0)
		return (0);
	return (act_prime(n, k - 1));
}
