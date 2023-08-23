#include "main.h"
/**
 * times_table - It is a table multiplication
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a <= 9)
	{
		while (b <= 9)
		{
			c = a * b;
			if (c <= 9)
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(32);
				_putchar(32);
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				_putchar(',');
				_putchar(32);
			}
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
