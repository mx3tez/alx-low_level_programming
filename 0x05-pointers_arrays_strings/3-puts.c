#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: Pointer to the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
