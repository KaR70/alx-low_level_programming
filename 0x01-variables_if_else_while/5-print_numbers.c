#include <stdio.h>
/**
 * main -Entry point
 * Description: prints allsingle digit numbers of
 * base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int s = 0;

	while (s < 10)
	{
		printf("%d", s);
		s++;
	}
	putchar('\n');
	return (0);
}
