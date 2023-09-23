#include <stdio.h>

/**
 * main - This is the entry point of the code that prints
 * all single numbers of base 10 follow by a new line without using the char
 * function
 *
 * Return: Always success(0)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
