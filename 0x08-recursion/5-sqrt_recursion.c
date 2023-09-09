#include "main.h"
/**
 * first_sqrt_recursion - This is my my_sqrt_recursion
 *                     function about the square root
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: This is the result
 */
int first_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if (a < (b * b))
		return (-1);
	else
		return (first_sqrt_recursion(a, b + 1));
}
/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function my_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (first_sqrt_recursion(n, 0));
}
