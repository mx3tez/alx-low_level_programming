#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: an integer input
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
