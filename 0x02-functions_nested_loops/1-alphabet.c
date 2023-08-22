#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase,
 * followed by a new
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char l = 'a';

	while(l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (0);
}
