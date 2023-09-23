#include <stdio.h>

/**
 * main - This is the entry point of a code that prints the alphabet in reverse
 *
 * Return: Always success(0)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
