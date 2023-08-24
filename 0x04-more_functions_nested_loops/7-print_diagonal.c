#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(32);
			_putchar('\\');
			_putchar('\n');
		}
	}
}
