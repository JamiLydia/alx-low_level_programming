#include <stdio.h>

/**
 * main - prints all letter except q and e
 *
 * Return: Success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	return (0);

}
