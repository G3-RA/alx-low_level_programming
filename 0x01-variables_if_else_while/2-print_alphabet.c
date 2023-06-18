#include <stdio.h>

/**
 * main - A program that prints alphabets in lowercase
 * Return: 0 (Successful)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i - 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
