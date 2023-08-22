#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10, in lowercase followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_(void);

void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		print_alphabet();
		count++;
	}
}
