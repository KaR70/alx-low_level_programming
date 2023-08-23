#include "main.h"
/**
 * jack_bauer - Count from 00:00 to 23:59
 *
 * @void: This is the entry
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
}
