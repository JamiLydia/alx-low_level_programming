#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int s;

	s = 0;

	while (s < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	s++;
	}

}
