#include <stdio.h>

/**
 * main - prints alphabets, main function
 *
 * Return: Success
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
