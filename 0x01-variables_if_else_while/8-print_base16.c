#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: 0 when success
 */

int main(void)
{
	int y;
	char x;

	for (y = 0; y <= 10; y++)
		putchar(y + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
