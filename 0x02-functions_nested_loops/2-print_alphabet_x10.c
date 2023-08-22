#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10, in lowercase followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int l = 'a';
	int count = 1;

	while (count <= 10)
	{
		print_alphabet();
		count++;
	}
}
