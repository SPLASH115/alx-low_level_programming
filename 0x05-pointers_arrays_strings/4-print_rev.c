#include "main.h"

/**
 *  print_rev - This function prints a string in reverse
 *  @s: holds the value of i
 *  Return: always 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)

	for (i = count ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
