#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int count = 1;
	char letter;

	while (count++ <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
