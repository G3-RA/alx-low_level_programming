#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
