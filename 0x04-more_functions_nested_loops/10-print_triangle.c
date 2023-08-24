#include "main.h"
/**
 * print_triangle - Print a triangle.
 * @size: How big the triangle would be.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - i))
					_putchar(32);
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

