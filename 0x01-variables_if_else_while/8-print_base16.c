#include <stdio.h>

/**
 * main - This is the entry point of the code that prints all numbs
 * of base 16 in a lower case
 *
 * Return: Always success(0)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
