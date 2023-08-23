#include "main.h"
/**
 * print_last_digit - ultimo digito de un numero
 *
 * @a: entry point
 *
 * Return: return las digit
 **/
int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
	}
	else
		_putchar(a + '0');
	return (a);
}
