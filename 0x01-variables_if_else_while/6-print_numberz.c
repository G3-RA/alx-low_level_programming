#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print numbers in base 10 using putchar'
 * Return: 0 (Successful)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
