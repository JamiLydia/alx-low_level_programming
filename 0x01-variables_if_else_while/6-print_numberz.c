#include <stdio.h>

/**
 * main - print single digits of base 10
 *
 * Return: Success
 */

int main(void)
{

	int y;

	for (y = 0; y < 10; y++)
		putchar(y + '0');

	putchar('\n');
	return (0);
}
