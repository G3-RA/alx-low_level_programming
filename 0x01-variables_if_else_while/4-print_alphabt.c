#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets except q and e'
 * Return: 0 (Successful)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
