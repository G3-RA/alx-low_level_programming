#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to be checked
 * Return: 1 if c is an alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
