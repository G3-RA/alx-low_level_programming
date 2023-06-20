#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Program that prints the alphabets in esrever'
 * Return: Always 0
 */

int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
