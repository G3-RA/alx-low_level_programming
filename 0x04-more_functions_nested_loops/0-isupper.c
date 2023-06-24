#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The value to check
 *
 * Return: 1 for uppercase or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
