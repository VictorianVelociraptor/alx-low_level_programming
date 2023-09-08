#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mirr;

	for (mirr = 'z'; mirr >= 'a'; mirr--)
	{
		putchar(mirr);
	}
	putchar('\n');
	return (0);
}
