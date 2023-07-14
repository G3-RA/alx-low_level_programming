#include "main.h"

/**
 * _puts_recursion - fuunctions as puts()
 * @s: input
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);

		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
