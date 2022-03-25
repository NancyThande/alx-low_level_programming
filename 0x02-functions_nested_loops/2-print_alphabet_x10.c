#include "main.h"

/**
 * print_alphabet_x10 - print (a-x)x10
 *
 * Return: Always zero.
 */
void print_alphabet_x10(void)
{
	int print = 0;
	char x = 'a';

	while (print < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');

		print++;
	}
}
