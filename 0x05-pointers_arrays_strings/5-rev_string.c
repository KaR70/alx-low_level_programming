#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char rev;

	while (s[i] != '\0')
		i++;

	k = i - 1;

	for (j = 0; j < k / 2; j++)
	{
		rev = s[j];
		s[j] = s[i];
		s[i--] = rev;
	}
}
