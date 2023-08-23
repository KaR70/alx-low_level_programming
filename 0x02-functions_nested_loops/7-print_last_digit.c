#include "main.h"
/**
 * print_last_digit - ultimo digito de un numero
 *
 * @n: entry point
 *
 * Return: return las digit
 **/
int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
		a = -a;
	else
		return (a);
}
