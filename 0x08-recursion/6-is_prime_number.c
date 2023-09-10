#include "main.h"
/**
 * is_prime_number - Write a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 *
 * @prime: Is my number prime
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	else if (n % 9 == 0 || n % 7 == 0)
		return (0);
	else 
		return (1);
}
